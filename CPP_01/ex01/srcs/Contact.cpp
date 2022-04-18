#include "../class/Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void		Contact::set_first_name(std::string afirst_name)
{ m_first_name = afirst_name; }

void		Contact::set_last_name(std::string alast_name)
{ m_last_name = alast_name; }

void		Contact::set_nickname(std::string anickname)
{ m_nickname = anickname; }

void		Contact::set_phone_number(std::string aphone_number)
{ m_phone_number = aphone_number; }

void		Contact::set_secret(std::string adarkest_secret)
{ m_darkest_secret = adarkest_secret; }

std::string	Contact::get_first_name() const
{ return (m_first_name); }

std::string	Contact::get_last_name() const
{ return (m_last_name); }

std::string	Contact::get_nickname() const
{ return (m_nickname); }

std::string	Contact::get_phone_number() const
{ return (m_phone_number); }

std::string	Contact::get_secret() const
{ return (m_darkest_secret); }
