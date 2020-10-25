#include "usecase_proxy1.h"

namespace Proxy1_ {

    No_proxy_image::No_proxy_image()
        : m_id { ++s_id_generator }
    {
        std::cout << "No_proxy_image " << this->m_id << " acquired\n";
    }
    No_proxy_image::~No_proxy_image()
    {
        std::cout << "No_proxy_image " << this->m_id << " destroyed\n";
    }
    void No_proxy_image::draw() const
    {
        std::cout << "drawing No_proxy_image " << this->m_id << '\n';
    }



    Image::Image ( int id )
        : m_id { id }
    {
        std::cout << "Image " << this->m_id << " acquired\n";
    }
    Image::~Image()
    {
        std::cout << "Image " << this->m_id << " destroyed\n";
    }
    void Image::draw() const
    {
        std::cout << "drawing Image " << this->m_id << '\n';
    }

}
