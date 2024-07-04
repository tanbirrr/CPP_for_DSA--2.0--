#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    //string country;
    char country[50];
};
int main()
{
    Cricketer * dhoni=new Cricketer;
    dhoni->jersey_no=7;
    //string tmp="BHarat";
    char tmp[50]="BHaraT";
    strcpy(dhoni->country,tmp);

    //cout<<dhoni->country<<" "<<dhoni->jersey_no; 
    Cricketer *kohli=new Cricketer;
    kohli->jersey_no=19;
    //char temp[50]="India";
    char temp[50]="India";
    strcpy(kohli.country,temp);
    
    //*kohli=*dhoni;
    //kohli=dhoni;
    //delete dhoni;
    kohli->jersey_no=dhoni->jersey_no;
    //kohli->country=dhoni->country;
    strcpy(kohli->country,dhoni->country);

    delete dhoni;

    cout<<kohli->jersey_no<<" "<<kohli->country;
    

    return 0;
}