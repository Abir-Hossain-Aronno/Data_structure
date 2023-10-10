#include <iostream>
using namespace std;
struct student{
    string id;
    int semester;
    int creditcomplete;
    float cgpa;
};
int main ()
{

 student s[10];
 s[1].id="22-4732-2";
 s[1].semester=3;
 s[1].creditcomplete=41;
 s[1].cgpa=4;

 s[2].id="22-4344-2";
 s[2].semester=5;
 s[2].creditcomplete=58;
 s[2].cgpa=3.79;

 s[3].id="22-3724-2";
 s[3].semester=5;
 s[3].creditcomplete=58;
 s[3].cgpa=3.29;


 s[4].id="22-234-2";
 s[4].semester=5;
 s[4].creditcomplete=58;
 s[4].cgpa=3.9;


 s[5].id="22-432-2";
 s[5].semester=5;
 s[5].creditcomplete=58;
 s[5].cgpa=3.85;

 s[6].id="22-987-2";
 s[6].semester=5;
 s[6].creditcomplete=58;
 s[6].cgpa=3.25;

 s[7].id="23-312-3";
 s[7].semester=5;
 s[7].creditcomplete=58;
 s[7].cgpa=3.2;

 s[8].id="21-756-2";
 s[8].semester=5;
 s[8].creditcomplete=76;
 s[8].cgpa=3.67;

 s[9].id="22-329-2";
 s[9].semester=5;
 s[9].creditcomplete=58;
 s[9].cgpa=3.98;


 for (int i = 0; i < 10; i++) {

  if (s[i].cgpa >= 3.75) {
    cout<< "student ID:" << s[i].id<<endl;
}
 }
  for (int i=0; i < 10; i++)  {


  if (s[i].creditcomplete >=28 &&  s[i].semester >=2) {

      cout<< "schoolership student" << s[i].id<<endl;
  }
  }

  for (int i=0; i < 10; i++)  {


  if (s[i].creditcomplete >=50) {

      cout<< "student_ID" << s[i].id<<endl;
  }



  }


}















