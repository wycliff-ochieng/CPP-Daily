#include <iostream>


class Hotel
{
    public:

    explicit Hotel(std::string name,std::string location)
        :   hotelName(name),hotelLocation(location)
    {
       //std::string getHotelName()

    }

    void setHotelName(std::string name)
    {
        hotelName = name;
    }
    void setLocationName(std::string location)
    {
        hotelLocation = location;
    }
    std::string getHotelName() const
    {
        return hotelName;
    }

    private:
    std::string hotelName;
    std::string hotelLocation;

};


int main() {}