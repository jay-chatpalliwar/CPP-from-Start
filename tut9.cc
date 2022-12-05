# include <iostream>
using namespace std;

int main()
{
// Selection structures in C++ with If-else statements********

int age;

cout<<"Enter your age :"<<endl;
cin>>age;

if ((age<18) &&(age>0))
{
    cout<<"You are not eligible for voting.."<<endl;
}
else 
{
    if (age>=18)
    {
        cout<<"You are eligible for voting.."<<endl;
    }
    else{
        cout<<"Please enter a valid age.."<<endl;
    }
}

cout<<"Thankyou for giving the survey.."<<endl;
cout<<"*************End of IF-ELSE statements***********"<<endl;
//  ****************Switch-case statements***************************

int subject_code;

cout<<"Enter your Subject Code:"<<endl<<"01 for Maths and Science both."<<endl<<"02 for Maths only."<<endl<<"03 for Science only."<<endl;
cin>>subject_code;

switch (subject_code)
{
    case (01):
    {
        cout<<"Congratulations!!You will recieve a reward of Rs1000."<<endl;
        break;
    }
    case (02):
    {
        cout<<"Congratulations!!You will recieve a reward of Rs300."<<endl;
        break;
    }
    case (03):
    {
        cout<<"Congratulations!!You will recieve a reward of Rs300."<<endl;
        break;
    }

    default:
    {
      cout<<"Please enter a valid Subject Code."<<endl;
      break;
    }

}

return 0;
}