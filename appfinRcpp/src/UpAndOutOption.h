#include<vector>

class UpAndOutOption{
public:

	//constructor
	UpAndOutOption(
		int nInt_,
		double strike_,
		double spot_,
		double vol_,
		double r_,
		double expiry_,
		double barrier_
		);

	//destructor
	~UpAndOutOption(){};

	//methods
	void generatePath();
	void printPath();
	double getMaxValue();
	double getUpAndOutCallPrice(int nReps);
	double getUpAndOutPutPrice(int nReps);
	double operator()(char char1, int nReps);
	
	//members
	std::vector<double> thisPath;
	int nInt;
	double strike;
	double spot;
	double vol;
	double r;
	double expiry;
	double barrier;

};
