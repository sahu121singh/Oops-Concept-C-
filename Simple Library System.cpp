      #include<iostream>
using namespace std;
class library
{
public:
    char B[10],A[10],ISBN[10];
    int Q,P;
    void book_info()
    {
        cout<<"book name,author name,ISBN no,quantity,price"<<endl;
        cin>>B;
        cin>>A;
        cin>>ISBN;
        cin>>Q;
        cin>>P;
        cout<<'\n';
    }
    library issued_book(library l)
    {
        library l2;
        l2=l;
        l2.Q=l.Q-1;
        cout<<'\n';
        return l2;
    }
    void display_book()
    {
        cout<<"book name="<<B<<endl;
        cout<<"author name="<<A<<endl;
        cout<<"ISBN N0="<<ISBN<<endl;
        cout<<"quantity of book="<<Q<<endl;
        cout<<"price of book="<<P<<endl;
        cout<<'\n';
    }
    int budget(library l)
    {
        int budget;
        budget=l.Q*l.P;
        return budget;
    }
};
int main()
{
    library l[3];
    int n,sum,i;
    char name[10];
    while(1)
    {
        cout<<"1.book_info\n2.display_book\n3.issued_book\n4.Total_budget\n";
        cout<<"enter your choice: "<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            for(i=0;i<3;i++)
                l[i].book_info();
            break;
        case 2:
            for(i=0;i<3;i++)
                l[i].display_book();
            break;
        case 3:
            for(i=0;i<3;i++)
            {
                cout<<i<<"."<<l[i].B<<endl;
            }
            cout<<"enter the book index:";
            cin>>i;
            l[i]=l[i].issued_book(l[i]);
            break;
        case 4:
            sum=0;
            for(i=0;i<3;i++)
            {
                sum=sum+l[i].budget(l[i]);
            }
            cout<<"budget of library is "<<sum<<endl;
            cout<<'\n';
            break;
        default:
            cout<<"Invalid"<<endl;
            break;
        }
    }
    return 0;
}
