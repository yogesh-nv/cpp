#include<iostream>
#include<vector>
using namespace std;
class MATRIX{
	private:
	vector<vector<int> >matrix;
	int rows,columns;
	public:
	MATRIX(int numrows,int numcols){
		rows=numrows;
		columns=numcols;
		matrix.resize(rows,vector<int>(columns));
	}
	void input()
	{
		cout<<"enter the elements"<<endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				cin>>matrix[i][j];
			}
			
		}
		
	}
	bool operator==(const MATRIX& otherMatrix)const
	{
		return(rows==otherMatrix.rows&&columns==otherMatrix.columns);
	}
	MATRIX operator+(const MATRIX& otherMatrix)const{
		MATRIX result(rows,columns);
		if(*this==otherMatrix){
			for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				result.matrix[i][j]=matrix[i][j]+ otherMatrix.matrix[i][j];
			}
			
		}
		}
		else
		cout<<"error"<<endl;
		return result;
	}
	MATRIX operator-(const MATRIX& otherMatrix)const{
		MATRIX result(rows,columns);
		if(*this==otherMatrix){
			for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				result.matrix[i][j]=matrix[i][j]-otherMatrix.matrix[i][j];
			}
			
		}
		}
		else
		cout<<"error"<<endl;
	return result;
	}
	friend ostream& operator <<(ostream& os ,const MATRIX& matrix)
	{
		for (int i = 0; i < matrix.rows; i++)
		{
			for (int j = 0; j < matrix.columns; j++)
			{
				os<<matrix.matrix[i][j]<<"";
			}
		}
	return os;
	}
};
int main()
{
	int rows,columns;
	cout<<"enter the row and column size of matrix 1"<<endl;
	cin>>rows>>columns;

	cout<<"enter the row and column size of matrix 2"<<endl;
	cin>>rows>>columns;
	MATRIX m1(rows,columns);
	MATRIX m2(rows,columns);
	if(m1==m2){
		cout<<"eenter the matrix element 1"<<endl;
		m1.input();
		cout<<"eenter the matrix element 2"<<endl;
		m2.input();
		MATRIX m3=m1+m2;
		cout<<"addition result"<<m3<<endl;
		MATRIX m4=m1-m2;
		cout<<"subtraction of matrix"<<m4<<endl;
	}
	else
	{
		cout<<"error"<<endl;
	}

return 0;
}