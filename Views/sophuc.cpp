#include<iostptam>
#include<math.h>
using namespace std;
class sophuc
{
	private:
		float pt,pa;
	public:
		void nhap()
		{
			cout<<"Nhap phan thuc : "; cin>>pt;
			cout<<"Nhap phan ao: "; cin>>pt;
		}
		void in()
		{
			cout<<"so phuc: "<<pt<<"+"<<pa<<"i"<<endl;
		}
		sophuc tong(sophuc r)
		{
			sophuc p;
			p.pt=r.pt+pt;
			p.pa=r.pa+pa;
			cout<<"\ntong cua 2 so thuc la:"<<endl;
			cout<<p.pt<<"+"<<p.pa<<"i"<<endl;
			return p;
		}
		sophuc hieu(sophuc x)
		{
  			sophuc c;
  			c.pt=x.pt-pt;
			c.pa=x.pa-pa;
			 return c;
		}
		sophuc trituyetdoi(sophuc z)
		{
			 z= abs(z);
  			 printf("Gia tri cua z = %d\n", z);
		
		}

};
int main()
{
	sophuc a,b;
	a.nhap();
	a.in();
	b.nhap();
	b.in();
	a.tong(b);
	a.hieu(b);
	
}		
