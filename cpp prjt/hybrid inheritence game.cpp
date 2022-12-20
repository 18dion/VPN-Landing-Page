#include<iostream>
using namespace std;
class student
{
  protected :
  int rollno;
  string name;

  public :
  void getstud()
  {
    std::cout<<"\n Enter rollno :";
    std::cin>>rollno;
    std::cout<<"\n Enter name of student :";
    std::cin>>name;
  }
  void outstud()
  {
    std::cout<<"\n \tSTUDENT DETAILS \n";

    std::cout<<"\n Rollno :"<<rollno;
    std::cout<<"\n Name :"<<name<<"\n";
  }
};
class test : public student
{
  protected:
  int part1,part2;

  public:
  void intest()
  {
    std::cout<<"\n Marks in Test 1 :";
    std::cin>>part1;
    std::cout<<"\n Marks in Test 2 :";
    std::cin>>part2;

  }
  void outest()
  {
    std::cout<<"\n \tMARKS \n";

    std::cout<<"\n Test 1 :"<<part1;
    std::cout<<"\n Test 2 :"<<part2<<"\n";
  }
};
class sport
{
  protected:
  string game;
  float score;

  public: 
  void ingame()
  {
    cout<<"\n Enter game :";
    cin>>game;
    cout<<"\n Enter score :";
    cin>>score;
  }
  void outgame()
  {
    std::cout<<"\n \tSPORTS \n";

    cout<<"\n Game :"<<game;
    cout<<"\n Score :"<<score<<"\n";
  }
};
class result : public test , public sport
{
  protected:
  float tot_mark;

  public :
  void resto()
  {
    std::cout<<"\n \tTOTAL \n";

    cout<<"\n Total Marks :"<<part1+part2;
    cout<<"\n Total Score in game :"<<score;
  }
};
int main()
{
  result r1;
  r1.getstud();
  r1.intest();
  r1.ingame();

  r1.outstud();
  r1.outest();
  r1.outgame();
  r1.resto();
  

}
