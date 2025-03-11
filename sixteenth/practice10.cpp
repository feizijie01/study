#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<memory>
using namespace std;

struct Review
{
    string title;
    int rating;
    double price;
};

bool operator<(const shared_ptr<Review>,const shared_ptr<Review>);
bool worsethan(const shared_ptr<Review> s1,const shared_ptr<Review> s2);
bool cheapthan(const shared_ptr<Review> s1,const shared_ptr<Review> s2);
bool FillReview(Review & r);
void ShowList(const shared_ptr<Review>);

int main()
{   
    vector<Review>book;
    Review temp;
    while(FillReview(temp))
    book.push_back(temp);
    
    if(book.size()>0)
    {
        vector<shared_ptr<Review>>booklist(book.size());
        for(int i=0;i<booklist.size();i++)
        booklist[i]=shared_ptr<Review>(new Review (book[i]));
        auto booklist1(booklist);

        cout << "Please enter the command:\n";
        string cm;
        cout << "OG:original display, AL:alpha order display, RU:rating up order\n"
             << "RD:rating down order, PU:price up order, PD:price down order,other input to quit.\n";
        while (cin >> cm)
        {
            if(cm=="OG")
            {
                cout << "orginal order:\nRating\tPrice\tBook\n";
                for_each(booklist.begin(),booklist.end(),ShowList);
                cout << endl;
            }
            else if(cm=="AL")
            {
                cout << "Alpha order:\nRating\tPrice\tBook\n";
                sort(booklist1.begin(),booklist1.end());
                for_each(booklist1.begin(),booklist1.end(),ShowList);
                cout << endl;
            }
            else if(cm=="RU")
            {
                cout << "rating up order:\nRating\tPrice\tBook\n";
                sort(booklist1.begin(),booklist1.end(),worsethan);
                for_each(booklist1.rbegin(),booklist1.rend(),ShowList);
                cout << endl;
            }
            else if(cm=="RD")
            {
                cout << "rating down order:\nRating\tPrice\tBook\n";
                sort(booklist1.begin(),booklist1.end(),worsethan);
                for_each(booklist1.begin(),booklist1.end(),ShowList);
                cout << endl;
            }
            else if(cm=="PU")
            {
                cout << "price up order:\nRating\tPrice\tBook\n";
                sort(booklist1.begin(),booklist1.end(),cheapthan);
                for_each(booklist1.rbegin(),booklist1.rend(),ShowList);
                cout << endl;
            }
            else if(cm=="PD")
            {
                cout << "price down order:\nRating\tPrice\tBook\n";
                sort(booklist1.begin(),booklist1.end(),cheapthan);
                for_each(booklist1.begin(),booklist1.end(),ShowList);
                cout << endl;
            }
            else break;

            cout << "OG:original display, AL:alpha order display, RU:rating up order\n"
            << "RD:rating down order, PU:price up order, PD:price down order,other input to quit.\n";
        }
    }         
    else
    cout << "Nothing here.\n";

    cout << "Done.\n"; 
    cin.get();
    cin.get();
    return 0;
    
}

bool operator<(const shared_ptr<Review> s1,const shared_ptr<Review> s2)
{
    if(s1->title<s2->title)
    return true;
    if(s1->title==s2->title && s1->rating<s2->rating)
    return true;
    else
    return false;
}

bool worsethan(const shared_ptr<Review> s1,const shared_ptr<Review> s2)
{
    return s1->rating<s2->rating;   //评级降序
}

bool cheapthan(const shared_ptr<Review> s1,const shared_ptr<Review> s2)
{
    return s1->price<s2->price;  //价格降序
}

bool FillReview(Review & r)
{
    cout << "Please enter book title(quit to quit):";
    getline(cin,r.title);
    if(r.title=="quit")
    return false;
    cout << "Please enter book rating:";
    cin >> r.rating;
    cout << "Please enter book price:";
    cin >> r.price;
    while(cin.get()!='\n')
    continue;
    return true;
}

void ShowList(const shared_ptr<Review> s1)
{
    cout << s1->rating << "\t" << s1->price<< "\t" << s1->title << endl;
}