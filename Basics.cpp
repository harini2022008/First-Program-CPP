#include &lt;iostream&gt;
using namespace std;
class Student
{
private:
int rollNo;
string name;
public:
// Constructor
Student(int r, string n)
{
rollNo = r;
name = n;
cout &lt;&lt; &quot;Student object created&quot; &lt;&lt; endl;

10

}
// Member function
void display()
{
cout &lt;&lt; &quot;Roll Number: &quot; &lt;&lt; rollNo &lt;&lt; endl;
cout &lt;&lt; &quot;Name: &quot; &lt;&lt; name &lt;&lt; endl;
}
// Destructor
~Student()
{
cout &lt;&lt; &quot;Student object destroyed&quot; &lt;&lt; endl;
}
};
int main()
{
Student s1(101, &quot;Arun&quot;);
s1.display();
return 0;
}