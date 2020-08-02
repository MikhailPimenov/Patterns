#ifndef COMMANDBASE_H
#define COMMANDBASE_H

#include <iostream>

std::string getUsersInput ( const std::string &promt );


class ChessGame
{
public:
    ChessGame();
    virtual ~ChessGame();

    virtual void createGame() const;
    virtual void saveGame ( const std::string &fileName ) const;
    virtual void loadGame ( const std::string &fileName ) const;
    virtual void makeMove ( const std::string &move ) const;
    virtual void undoMove() const;
};

class CommandBase
{
protected:
    ChessGame *mGame;
public:
    CommandBase ( ChessGame *game = nullptr );
    virtual ~CommandBase();

    virtual void execute() const = 0;
};

class CreateGameCommand : public CommandBase
{
public:
    CreateGameCommand ( ChessGame *game = nullptr );
    virtual ~CreateGameCommand() override;

    virtual void execute() const override;
};

class SaveGameCommand : public CommandBase
{
public:
    SaveGameCommand ( ChessGame *game = nullptr );
    virtual ~SaveGameCommand() override;

    virtual void execute() const override;
};

class LoadGameCommand : public CommandBase
{
public:
    LoadGameCommand ( ChessGame *game = nullptr );
    virtual ~LoadGameCommand() override;

    virtual void execute() const override;
};

class MakeMoveCommand : public CommandBase
{
public:
    MakeMoveCommand ( ChessGame *game = nullptr );
    virtual ~MakeMoveCommand() override;

    virtual void execute() const override;
};

class UndoMoveCommand : public CommandBase
{
public:
    UndoMoveCommand ( ChessGame *game = nullptr );
    virtual ~UndoMoveCommand() override;

    virtual void execute() const override;
};

#endif // COMMANDBASE_H
