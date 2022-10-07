#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////////////////////////11111111111111
class Wakeup{
 public:
  int hour;
  string exercise;

  Wakeup(int h_hour, string e_exercise){
   hour=h_hour;
   exercise=e_exercise;
   cout<<"I wake up at "<<hour<<" and I "<<exercise<<endl;
  }
  void exept(){
   cout<<"I may wake up at seven"<<endl;
  }
};
////////////////////////////////////////////////////////////////////////////////2222222222222
class Eat{
 public:
  string drink;
  int hour;
  string food;
  Eat(string drink_d,int hour_i,string food_f){
   drink = drink_d;
   hour = hour_i;
   food = food_f;
   cout<<"I drink "<<drink<<" and eat "<<food<<" at "<<hour<<endl;
  }
  void Eats(){
   cout<<"Sometimes i may not eat"<<endl;
  }
};
///////////////////////////////////////////////////////////////////////////////////////333333333
class School{
 public:
    int hours;
  string nameos;
  School(string nameos_s,int hours_i){
   nameos=nameos_s;
   hours=hours_i;
   cout<<"I go to "<<nameos<<" at "<<hours<<" am "<<endl;
  }
  void Sick(){
   cout<<"I may be sick and not go to school"<<endl;
  }
};
///////////////////////////////////////////////////////////////////////////////////////44444444444
class Study{
 public:
  string objects;
  int objectnum;
  Study(string objects_o,int objectnum_i){
   objects=objects_o;
   objectnum=objectnum_i;
   cout<<"I have "<<objectnum<<" subjects today and they are  "<<objects<<endl;
  }
  void ODays(){
   cout<<"The other days i have different subjects and a differnt number of it"<<endl;
  }
};
////////////////////////////////////////////////////////////////////////////////////////////55555555555
class Breaks_School{
 public:
  int countb;
  Breaks_School(int countb_c){
   countb=countb_c;
   cout<<"I have "<<countb<<" on Monday"<<endl;
  }
  void OBreaks(){
   cout<<"I have less or more breaks depending on the day"<<endl;
  }
};
//////////////////////////////////////////////////////////////////////////66666666666
class Afterclass{
 public:
  int timec;
  string day;
  Afterclass(int timec_t,string day_d){
   timec=timec_t;
   day=day_d;
   cout<<"My classes end at "<<timec<<" on "<<day<<endl;
  }
  void OADays(){
   cout<<"My time at school ends either sooner or later depending on the day"<<endl;
  }
};
///////////////////////////////////////////////////////////////////////////////7777777777777
class At_Home{
 public:
  string day;
  int timesd;
  string vehicle;
  At_Home(string day_d,int timesd_i,string vehicle_v){
   day=day_d;
   timesd=timesd_i;
   vehicle=vehicle_v;
   cout<<"On "<<day<<" I arrive home at "<<timesd<<" by "<<vehicle<<endl;
  }
  void OAt_Home(){
   cout<<"Depending on day and situation i may come sooner or later home and by using different vehicle"<<endl;
  }
};
//////////////////////////////////////////////////////////////////////////////88888888888888
class Dinner{
 public:
  string day;
  string food;
  double timee;
  Dinner(string day_d,string food_f,double timee_i){
   day =day_d;
   food=food_f;
   timee=timee_i;
   cout<<"On "<<day<<" I have "<<food<< " at "<<timee<<" pm"<<endl;
  }
  void EDinner(){
   cout<<"Each time I would have something different at dinner"<<endl;
  }
};
/////////////////////////////////////////////////////////////////////////99999999999999
class Homework{
 public:
  string subjects;
  int numsubject;
  int timestart;
  int timeend;
  Homework(string subjects_s,int timestart_s, int timeend_e){
   subjects=subjects_s;
   timestart=timestart_s;
   timeend=timeend_e;
   cout<<"After dinner I take a short break then I start my homework at "<<timestart<<" pm until "<<timeend<<" pm on "<<subjects<<endl;
  }
  void OHomework(){
   cout<<"There may be a good day not to have homework but we should be realistic and mostly i start on different times and i have homework on different subjects depending on day and the situation "<<endl;
  }
};
///////////////////////////////////////////////////////////////////////////10 10 10 10 10 10 10 10 10 10 10
class Sleep{
 public:
  int goSleep;
  int SleepAmount;
  Sleep(int goSleep_s, int SleepAmount){
   goSleep=goSleep_s;
   cout<<"After my Homeworks are done I go to sleep at "<<goSleep<<" and I try to sleep at least "<<SleepAmount<<endl;
  }
  void Sleeplessness(){
   cout<<"Due to depression I might not think that night"<<endl;
  }
};
//////////////////////////////////////////////////////////////////////////////////11 11 11 11 11 11 11 11 11 11
int main(){
Wakeup wkup(6,"strech");
Eat eat("tea",8,"sandwich");
School schl("IPLT Spiru Haret",8);
Study stdy("Math,Physics,English,Chemistry,English",5);
Breaks_School brsl(4);
Afterclass afcl(5,"Monday");
At_Home athm("Monday",6,"Troleybus");
Dinner dnr("Monday","Pelmeni",7.35);
Homework hw("Math,Chemistry,Physics",8,10);
Sleep slpt(11,8);
 int yourchoice;
 do{
  cout<<" 1.Wakeup\n";
  cout<<" 2.Eat\n";
  cout<<" 3.School\n";
  cout<<" 4.Study\n";
  cout<<" 5.Breaks\n";
  cout<<" 6.Afterclass\n";
  cout<<" 7.Home\n";
  cout<<" 8.Dinner\n";
  cout<<" 9.Homework\n";
  cout<<" 10.Sleep\n";
  cin>>yourchoice;
  switch (yourchoice){
   case 1:
    wkup.exept();
    break;
   case 2:
    eat.Eats();
    break;
   case 3:
    schl.Sick();
    break;
   case 4:
    stdy.ODays();
    break;
   case 5:
    brsl.OBreaks();
    break;
   case 6:
    afcl.OADays();
    break;
   case 7:
    athm.OAt_Home();
    break;
   case 8:
       dnr.EDinner();
    break;
   case 9:
    hw.OHomework();
    break;
   case 10:
    slpt.Sleeplessness();
    break;
   default: cout<<"invalid"; break;
  }
 } while (yourchoice!=11);
 return 0;
}
