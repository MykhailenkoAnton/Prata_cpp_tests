#pragma once


class Store
{
private:
    std::ofstream & of;
public:
    Store(std::ofstream & file) : of(file) {}
    void operator()(const std::string & s)
    {
        size_t len = s.size();

        of.write((char*) &len, sizeof(size_t));
        of.write(s.data(), len);
        of << std::endl;
    }
};