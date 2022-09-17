#include <cassert>
#include <string>

std::string people_with_age_drink(int age)
{
    return  (age < 14) ? "drink toddy" :
            (age < 18) ? "drink coke"  :
            (age < 21) ? "drink beer"  :
                        "drink whisky" ;

}

int main()
{
    
        assert(people_with_age_drink(0) == ("drink toddy"));
        assert(people_with_age_drink(13) == ("drink toddy"));
    
        assert(people_with_age_drink(14) == ("drink coke"));
        assert(people_with_age_drink(17) == ("drink coke"));
    
        assert(people_with_age_drink(18) == ("drink beer"));
        assert(people_with_age_drink(20) == ("drink beer"));
    
        assert(people_with_age_drink(21) == ("drink whisky"));
        assert(people_with_age_drink(25) == ("drink whisky"));
    

    return 0;
}
