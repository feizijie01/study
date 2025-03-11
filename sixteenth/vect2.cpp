#include<iostream>
#include<vector>
#include<string>
using std::string,std::cin,std::cout,std::endl,std::getline,std::vector;
struct Review{
    string title;
    int rating;
};

bool FillReview(Review & r);
void ShowReview(const Review & r);

int main()
{
    vector<Review>book;
    Review temp;
    while(FillReview(temp))
    book.push_back(temp);
    int num = book.size();

    if(num>0)
    {
        cout << "Rating\tTitle\n";
        for(int i=0;i<num;i++)
        ShowReview(book[i]);
        cout << "Use pointer:\n";
        cout << "Rating\tTitle\n";
        vector<Review>::iterator pr;
        for(pr=book.begin();pr!=book.end();pr++)
        ShowReview(*pr);

        if(num > 3)
        {   
            vector<Review>oldlist(book);
            //remove 2 element;
            book.erase(book.begin()+1,book.begin()+3);
            cout << "After erase 2 element\n";
            cout << "Rating\tTitle\n";
            for(pr=book.begin();pr!=book.end();pr++)
            ShowReview(*pr);
            //add 1
            book.insert(book.begin(),oldlist.begin()+1,oldlist.begin()+2);
            cout << "After insert 1 element\n";
            cout << "Rating\tTitle\n";
            for(pr=book.begin();pr!=book.end();pr++)
            ShowReview(*pr);
            book.swap(oldlist);
            cout << "After swap\n";
            cout << "Rating\tTitle\n";
            for(pr=book.begin();pr!=book.end();pr++)
            ShowReview(*pr);
        }
    }
    else
    cout << "Nothing.\n";
    cin.get();
    cin.get();
    return 0;
}

bool FillReview(Review & r)
{
    cout << "Enter the title<quit to quit>: ";
    getline(cin,r.title);
    if(r.title=="quit")
    return false;
    cout << "Enter the rating: ";
    cin >> r.rating;
    if(!cin)
    return false;
    while(cin.get()!='\n')
    continue;
    return true;
}

void ShowReview(const Review & r)
{
    cout << r.rating << "\t" << r.title << endl;
}