#include <iostream>
#include"csvhandler.h"

using namespace std;

int main()
{
    CsvHandler csv;

    vector<double>toDoub;

    vector<vector<int> > data;

    data.resize(3);

    for(int i=0;i<data.size();i++)
    {
        data[i].resize(3);
    }

    for(int i=0;i<data.size();i++)
    {
        for(int j=0;j<data[i].size();j++)
        {
            data[i][j]=j;
        }
    }

    csv.saveCsv(data);





    /*
    csv.loadCsv("inputWeights.csv");
    csv.displayCsv();
    cout<<endl;


    toDoub=CsvHandler::toDouble(csv.getCol(2));

    for(unsigned int i=0;i<toDoub.size();i++)
    {
        cout<<toDoub[i]<<endl;
    }
*/





    return 0;
}

