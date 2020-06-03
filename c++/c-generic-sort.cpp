template <class T>
void sortArray(T a[], int n)
{ 
	sort(a, a+n);
}

template <class T>
void printArray(T a[], int n)
{
	for(int i=0; i < n; i++)
	    cout << a[i] << " ";
	cout<<endl;
}