#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string,std::endl,std::cin,std::cout,std::vector;

struct Review
{
    string title;
    int rating;
};

bool FillReview(Review & r);
void ShowReview(const Review & r);
bool operator<(const Review & r1,const Review & r2);
bool worsethan(const Review & r1,const Review & r2);

int main()
{   
    vector<Review>books;
    Review temp;

    cout << "Enter the information: \n";
    while(FillReview(temp))
    books.push_back(temp);
    if(books.size()>0)
    {
        cout << "Rating\tbooks\n";
        for_each(books.begin(),books.end(),ShowReview);
        
        sort(books.begin(),books.end());
        cout << "Sorts by title:\nRating\tbooks\n";
        for_each(books.begin(),books.end(),ShowReview);

        sort(books.begin(),books.end(),worsethan);
        cout << "Sorts by Raing:\nRating\tbooks\n";
        for_each(books.begin(),books.end(),ShowReview);

        random_shuffle(books.begin(),books.end());
        cout << "Sorts by random:\nRating\tbooks\n";
        for_each(books.begin(),books.end(),ShowReview);
    }
    else 
    cout << "Nothing.\n";
    cout << "All done.\n";
    cin.get();
    cin.get();
    return 0;
}

bool FillReview(Review & r)
{
    cout << "Enter title<quit to quit>: ";
    getline(cin,r.title);
    if(r.title == "quit")
    return false;
    cout << "Enter rating: ";
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

bool operator<(const Review & r1, const Review & r2)
{
    if(r1.title<r2.title)
    return true;
    if(r1.title==r2.title && r1.rating < r2.rating)
    return true;
    else 
    return false;
}

bool worsethan(const Review & r1, const Review & r2)
{
    if(r1.rating < r2.rating)
    return true;
    else
    return false;
}