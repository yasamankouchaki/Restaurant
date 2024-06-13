#include <iostream>
class Restaurant
{
private:
    bool menuEnabled;
    int valueAddedTax;
public:
    Restaurant(): menuEnabled(true),
        valueAddedTax(9){}

                void disableMenu(){
                    menuEnabled = false;
                }
                void setValueAddedTax(int taxRate){
                valueAddedTax = taxRate;
                }

               void displaylnfo(){
                   std::cout<<"Menu Enabled:"<<
                    (menuEnabled?"Yes":"No")<<std::endl;
                   std::cout<<"Value Added Tax Rate:"<<valueAddedTax<<"%"<<std::endl;
               }
};
int main(){
    Restaurant myRestaurant;
    myRestaurant.displaylnfo();
    myRestaurant.disableMenu();
    myRestaurant.setValueAddedTax(12);
    myRestaurant.displaylnfo();


            return 0;
};
