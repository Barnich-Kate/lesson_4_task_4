#include <iostream>

using namespace std;

bool func(int y)
{
    if ((y%4 == 0) && !(y%100 == 0 && y%400 != 0)){
        return 1;
    }
    else
        return 0;
}

int MonthDays(int m, int y) {
    for(int i = 0 ; i < 3; ++i){
        cin >> m;
        if(func(y)){
            switch(m){
                case 1: cout << 31; break;
                case 2: cout << 29; break;
                case 3: cout << 31;break;
                case 4: cout << 30;break;
                case 5: cout << 31;break;
                case 6: cout << 30;break;
                case 7: cout << 31;break;
                case 8: cout << 31;break;
                case 9: cout << 30;break;
                case 10:cout << 31;break;
                case 11: cout << 30;break;
                case 12: cout << 31; break;
            }
        }else{
            switch(m){
                case 1: cout << 31; break;
                case 2: cout << 28; break;
                case 3: cout << 31;break;
                case 4: cout << 30;break;
                case 5: cout << 31;break;
                case 6: cout << 30;break;
                case 7: cout << 31;break;
                case 8: cout << 31;break;
                case 9: cout << 30;break;
                case 10:cout << 31;break;
                case 11: cout << 30;break;
                case 12: cout << 31; break;
            }
        }
    }
    
int main {
    
    int y, m;
    cout << Type year: << endl;
    cin >> y;
    cout << Type number of month: << endl;
    cin >> y;
    func (y);
    MonthDays (y, m);
    
   
    

    return 0;
}
