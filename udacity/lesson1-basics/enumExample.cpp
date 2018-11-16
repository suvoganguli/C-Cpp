/* enum example */

# include <iostream>
using namespace std;

int main()

{
	enum days {Sun, Mon, Tue, Wed, Thu, Fri};
	
	days bestDay = Fri;
	
	cout << "Best day is day " << bestDay << " of the week\n";
	
	return 0;
	
}
	
