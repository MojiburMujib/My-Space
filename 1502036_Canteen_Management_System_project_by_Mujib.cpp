#include<iostream>
#include<windows.h>
#include<conio.h>
#include<iomanip>
#include<cstdio>
using namespace std;

int disp()
{
    //system("color 2e");
    cout<<endl<<" +++++++++++++++++++++++++++++++++++++++ ";
    cout<<endl<<" +                  *                  + ";
    cout<<endl<<" +                 ***                 + ";
    cout<<endl<<" +                *****                + ";
    cout<<endl<<" +               *******               + ";
    cout<<endl<<" +              *********              + ";
    cout<<endl<<" +             ***********             + ";
    cout<<endl<<" +            *************            + ";
    cout<<endl<<" +           ***************           + ";
    cout<<endl<<" +          *****************          + ";
    cout<<endl<<" +         *******************         + ";
    cout<<endl<<" +        *********************        + ";
    cout<<endl<<" +       ******* WELCOME *******       + ";
    cout<<endl<<" +        *********************        + ";
    cout<<endl<<" +         *******************         + ";
    cout<<endl<<" +          *****************          + ";
    cout<<endl<<" +           ***************           + ";
    cout<<endl<<" +            *************            + ";
    cout<<endl<<" +             ***********             + ";
    cout<<endl<<" +              *********              + ";
    cout<<endl<<" +               *******               + ";
    cout<<endl<<" +                *****                + ";
    cout<<endl<<" +                 ***                 + ";
    cout<<endl<<" +                  *                  + ";
    cout<<endl<<" +++++++++++++++++++++++++++++++++++++++ ";
    getch();
}
int feature_of_canteen()
{
    int qubis,abis,qupep,apep,quden,aden,qumun,amun,quperk,aperk,qucoc,acoc,qutit,atit,qulux,alux,quree,aree;
    int m,n,o,p,q,r,s,t,u;
    char name[50],rank[10],pu,c[20],a[15],b[15],ok;
    int sum,add,d,i,j,e,f,g,h,k,l,w,x,y,ri;
    qubis=1000,qupep=1000,quden=110,qumun=1000,quperk=500,qucoc=400,qutit=100,qulux=1000,quree=300;
    m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0;
main:
    cout<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     MUJIB CANTEEN MANAGEMENT";
    cout<<endl<<"\n\n\n\n CUSTOMER INFORMATION :";
    cout<<endl<<"\n\n NAME: ";
    gets(name);
    cout<<endl<<" RANK: ";
    gets(rank);
    cout<<endl<<" SERVICE NO.: ";
    gets(a);
    cout<<endl<<" SMART CARD NO.: ";
    gets(b);
    cout<<endl<<" PHONE NO.: ";
    gets(c);
    cout<<endl<<" ENTER BILL NO.: ";
    cin>>i;
again:
    cout<<endl<<"\n\n 1. MENU & PURCHASE";
    cout<<endl<<"\n\n 2. DETAILS";
    cout<<endl<<"\n\n 3. NEW CUSTOMER";
    cout<<endl<<"\n\n 4. QUANTITY AVAILABLE";
    cout<<endl<<"\n\n 5. EXIT";
    cout<<endl<<"\n\n ENTER YOUR CHOICE (1-5) : ";
    cin>>d;
    switch(d)
    {
    case 1:
        cout<<endl<<"\n\n\t\t\t   PURCHASE LIST ";
        cout<<endl<<"\n\n   ITEMS\t\t\t\t\t\t      RATE(T.K.)";
        cout<<endl<<"\n\n BISCUIT\t\t\t\t\t\t\t10  ";
        cout<<endl<<"\n PEPSODENT\t\t\t\t\t\t\t36";
        cout<<endl<<"\n DENIM POWDER\t\t\t\t\t\t\t110   ";
        cout<<endl<<"\n MUNCH\t\t\t\t\t\t\t\t8  ";
        cout<<endl<<"\n PARK AVENUE PERFUME\t\t\t\t\t\t110   ";
        cout<<endl<<"\n COCONUT HAIR OIL\t\t\t\t\t\t90  ";
        cout<<endl<<"\n TITAN WATCH\t\t\t\t\t\t\t1199   ";
        cout<<endl<<"\n LUX SOAP\t\t\t\t\t\t\t17   ";
        cout<<endl<<"\n REEBOK SHOES\t\t\t\t\t\t\t1499   ";
        cout<<endl;
        getch();
        //start:
        cout<<"\n\n\n\n DO YOU WANT TO PURCHASE ? (Y/N) : ";
        cin>>pu;
        if(pu=='Y' || pu=='y')
        {
//            switch(pu)
//            case 1:
            cout<<endl<<"\n Enter quantity of items. ";
            bis:
                cout<<endl<<"\n\n BISCUIT (MAX 30) : ";
                cin>> m;
                if(m>30)
                {
                    cout<<endl<<"Enter Quantity Smaller than 30";
                    getch();
                    goto bis;
                }
                else
                    abis=qubis-m;
            pep:
                cout<<endl<<" PEPSODENT (MAX 5) : ";
                cin>>n;
                if(n>5)
                {
                    cout<<endl<<"Enter Quantity Smaller than 5";
                    getch();
                    goto pep;
                }
                else
                    apep=qupep-n;
            den:
                cout<<endl<<" DENIM POWDER (MAX 3) : ";
                cin>>o;
                if(o>3)
                {
                    cout<<endl<<"Enter Quantity Smaller then 3";
                    getch();
                    goto den;
                }
                else
                    aden=quden-o;
            mun:
                cout<<endl<<" MUNCH (MAX 50) : ";
                cin>>p;
                if(p>50)
                {
                    cout<<endl<<"Enter Quantity Smaller then 50";
                    getch();
                    goto mun;
                }
                else
                    amun=qumun-p;
            park:
                cout<<endl<<" PARK AVENUE PERFUME (MAX 2) : ";
                cin>>q;
                if(q>2)
                {
                    cout<<endl<<"Enter Quantity Smaller then 2";
                    getch();
                    goto park;
                }
                else
                    aperk=quperk-q;
            coco:
                cout<<endl<<" COCONUT HAIR OIL (MAX 5) : ";
                cin>>r;
                if(r>5)
                {
                    cout<<endl<<"Enter Quantity Smaller then 5";
                    getch();
                    goto coco;
                }
                else
                    acoc=qucoc-r;
            titan:
                cout<<endl<<" TITAN WATCH (MAX 2) : ";
                cin>>s;
                if(s>2)
                {
                    cout<<endl<<"Enter Quantity Smaller then 2";
                    getch();
                    goto titan;
                }
                else
                    atit=qutit-s;
            lux:
                cout<<endl<<" LUX SOAP (MAX 10) : ";
                cin>>t;
                if(t>10)
                {
                    cout<<endl<<"Enter Quantity Smaller then 10";
                    getch();
                    goto lux;
                }
                else
                    alux=qulux-t;
            ree:
                cout<<endl<<" REEBOK SHOES (MAX 4) : ";
                cin>>u;
                if(u>4)
                {
                    cout<<endl<<"Enter Quantity Smaller then 4";
                    getch();
                    goto ree;
                }
                else
                    aree=quree-u;

                e=m*10;
                f=n*36;
                g=o*110;
                h=p*8;
                k=q*110;
                l=r*90;
                w=s*1199;
                x=t*17;
                y=u*1499;
                sum=e+f+g+h+k+l+w+x+y;
                add=m+n+o+p+q+r+s+t+u;

                cout<<endl<<"";
                cout<<endl<<"\n\n\n\n\n\t\t\t\t MUJIB'S CANTEEN \n";
                cout<<endl<<"\n\t\t\t\t   CASH MEMO\n";
                cout<<endl<<"\n BILL NO.: "<<i;
                cout<<endl<<"\n NAME: "<<name;
                cout<<endl<<"\n RANK: "<<rank;
                cout<<endl<<"\n SERVICE NO.: "<<a;
                cout<<endl<<"\n SMART CARD NO.: "<<b;
                cout<<endl<<"\n PHONE NO.: "<<c;
                cout<<endl<<"\n\n";
                cout<<endl<<"===============================================================================";
                cout<<endl<<" ITEMS                          QUANTITY              PRICE(T.K.)\n";
                //cout<<endl<<===============================================================================";
                if(m>0)
                    cout<<endl<<"\n BISCUIT "<<setw(27)<<m<<setw(27)<<e;
                if(n>0)
                    cout<<endl<<"\n PEPSODENT "<<setw(25)<<n<<setw(27)<<f;
                if(o>0)
                    cout<<endl<<"\n DENIM POWDER "<<setw(22)<<o<<setw(27)<<g;
                if(p>0)
                    cout<<endl<<"\n MUNCH "<<setw(29)<<p<<setw(27)<<h;
                if(q>0)
                    cout<<endl<<"\n PARK AVENUE PERFUME "<<setw(15)<<q<<setw(27)<<k;
                if(r>0)
                    cout<<endl<<"\n COCONUT HAIR OIL "<<setw(18)<<r<<setw(27)<<l;
                if(s>0)
                    cout<<endl<<"\n TITAN WATCH "<<setw(23)<<s<<setw(27)<<w;
                if(t>0)
                    cout<<endl<<"\n LUX SOAP "<<setw(26)<<t<<setw(27)<<x;
                if(u>0)
                    cout<<endl<<"\n REEBOK SHOES "<<setw(22)<<u<<setw(27)<<y;

                cout<<endl<<"-------------------------------------------------------------------------------";
                cout<<endl<<" TOTAL: "<<setw(28)<<add<<setw(27)<<sum<<" T.K. ";
                cout<<endl<<"\n\n            *** THANK YOU ***** VISIT US AGAIN ***\n";
                getch();
                goto again;
        }
        else
        {
            goto again;
        }
    case 2:
        cout<<endl<<"\n\n\n\n\t\t\t\tCANTEEN DETAILS";
        cout<<endl<<"\n# TIMING:\n\n 9.00 AM to 2.00 PM \n 3.00 PM to 9.00 PM";
        cout<<endl<<"\n# CANTEEN WILL BE CLOSED ON FRIDAY";
        cout<<endl<<"\n# GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
        cout<<endl<<"\n# TAKE YOUR SMART CARD WITH YOU";
        cout<<endl<<"\n# COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
        cout<<endl<<"\n# DO NOT BREAK ANY CANTEEN ITEMS";
        cout<<endl<<"";
        getch();
        goto again;
    case 3:
        cin>>c;
        goto main;
    case 4:
        if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0)
        {
            cout<<endl<<"\n\n\t\t\t Items Avaliable in Canteen \n";
            cout<<endl<<"=============================================================================";
            cout<<endl<<"   ITEMS                        QUANTITY";
            cout<<endl<<"=============================================================================";
            cout<<endl<<"\n BISCUTE                          "<<abis;
            cout<<endl<<"\n PEPSODENT                        "<<apep;
            cout<<endl<<"\n DENIM POWDER                     "<<aden;
            cout<<endl<<"\n MUNCH                            "<<amun;
            cout<<endl<<"\n PARK AVENUE PERFUME              "<<aperk;
            cout<<endl<<"\n COCONUT HAIR OIL                 "<<acoc;
            cout<<endl<<"\n TITAN WATCH                      "<<atit;
            cout<<endl<<"\n LUX SOAP                         "<<alux;
            cout<<endl<<"\n REEBOK SHOES                     "<<aree;
            cout<<endl<<"\n********************************************************************************";
            getch();
            goto again;
        }
        else
        {
            cout<<endl<<"\n\n\t     Items Avaliable in Canteen \n\n";
            //cout<<endl<<=================================================================================";
            cout<<endl<<"   ITEMS                                     QUANTITY";
            //cout<<endl<<"===============================================================================";
            cout<<endl<<"\n\n BISCUTE                                       "<<qubis;
            cout<<endl<<"\n PEPSODENT                                     "<<qupep;
            cout<<endl<<"\n DENIM POWDER                                  "<<quden;
            cout<<endl<<"\n MUNCH                                         "<<qumun;
            cout<<endl<<"\n PARK AVENUE PERFUME                           "<<quperk;
            cout<<endl<<"\n COCONUT HAIR OIL                              "<<qucoc;
            cout<<endl<<"\n TITAN WATCH                                   "<<qutit;
            cout<<endl<<"\n LUX SOAP                                      "<<qulux;
            cout<<endl<<"\n REEBOK SHOES                                  "<<quree;
            cout<<endl<<"";
            getch();
            goto again;
        }
    case 5:
        cout<<endl<<" +++++++++++++++++++++++++++++++++++++++ ";
        cout<<endl<<" +                  *                  + ";
        cout<<endl<<" +                 ***                 + ";
        cout<<endl<<" +                *****                + ";
        cout<<endl<<" +               *******               + ";
        cout<<endl<<" +              *********              + ";
        cout<<endl<<" +             ***********             + ";
        cout<<endl<<" +            *************            + ";
        cout<<endl<<" +           ***************           + ";
        cout<<endl<<" +          *****************          + ";
        cout<<endl<<" +         *******************         + ";
        cout<<endl<<" +        *********************        + ";
        cout<<endl<<" +       ******* THANKS  *******       + ";
        cout<<endl<<" +        *********************        + ";
        cout<<endl<<" +         *******************         + ";
        cout<<endl<<" +          *****************          + ";
        cout<<endl<<" +           ***************           + ";
        cout<<endl<<" +            *************            + ";
        cout<<endl<<" +             ***********             + ";
        cout<<endl<<" +              *********              + ";
        cout<<endl<<" +               *******               + ";
        cout<<endl<<" +                *****                + ";
        cout<<endl<<" +                 ***                 + ";
        cout<<endl<<" +                  *                  + ";
        cout<<endl<<" +++++++++++++++++++++++++++++++++++++++ ";
        cout<<endl<<"\n\n";
        return 0;
    default:
        cout<<endl<<"Your choice is wrong";
        getch();
        goto again;
    }
}
int main()
{
    disp();
    feature_of_canteen();
}
