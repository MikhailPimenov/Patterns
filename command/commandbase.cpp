#include "commandbase.h"

ChessGame::ChessGame()
{}
ChessGame::~ChessGame()
{}

void ChessGame::createGame() const
{
    std::cout << "Game created\n";
}
void ChessGame::saveGame ( const std::string &fileName ) const
{
    std::cout << "Game saved in file : " << fileName << '\n';
}
void ChessGame::loadGame ( const std::string &fileName ) const
{
    std::cout << "Game loaded from file : " << fileName << '\n';
}
void ChessGame::makeMove ( const std::string &move ) const
{
    std::cout << "Move made : " << move << '\n';
}
void ChessGame::undoMove() const
{
    std::cout << "Last move canceled\n";
}

CommandBase::CommandBase ( ChessGame *game ) : mGame { game }
{}
CommandBase::~CommandBase()
{}

CreateGameCommand::CreateGameCommand ( ChessGame *game ) : CommandBase { game }
{}
CreateGameCommand::~CreateGameCommand()
{}
void CreateGameCommand::execute() const
{
    mGame->createGame();
}

SaveGameCommand::SaveGameCommand ( ChessGame *game ) : CommandBase { game }
{}
SaveGameCommand::~SaveGameCommand()
{}
void SaveGameCommand::execute() const
{
    std::string fileName = getUsersInput ( "Enter file name to save:" );
    mGame->saveGame ( fileName );
}

LoadGameCommand::LoadGameCommand ( ChessGame *game ) : CommandBase { game }
{}
LoadGameCommand::~LoadGameCommand()
{}
void LoadGameCommand::execute() const
{
    std::string fileName = getUsersInput ( "Enter file name to load:" );
    mGame->loadGame ( fileName );
}

MakeMoveCommand::MakeMoveCommand ( ChessGame *game ) : CommandBase { game }
{}
MakeMoveCommand::~MakeMoveCommand()
{}
void MakeMoveCommand::execute() const
{
    mGame->saveGame ( "TEMP_FILE" );
    std::string move = getUsersInput ( "Enter your move:" );
    mGame->makeMove ( move );
}

UndoMoveCommand::UndoMoveCommand ( ChessGame *game ) : CommandBase { game }
{}
UndoMoveCommand::~UndoMoveCommand()
{}
void UndoMoveCommand::execute() const
{
    mGame->loadGame ( "TEMP_FILE" );
    mGame->undoMove();
}


std::string getUsersInput ( const std::string &promt )
{
    std::cout << promt << '\n';

    std::string input;
    std::getline ( std::cin, input );

    return input;
}
