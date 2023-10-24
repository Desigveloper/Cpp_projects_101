#include <iostream>

using namespace std;
#define MONTHS_PER_YEAR 12;
#define INCOME_TAX_RATE 0.096
#define SOCIAL_SECURITY_RATE 0.05

double calcMonthlyIncome(double grossIncome);
double calcIncomeTax(double netMonthlyIncome);
double calcSocialSecurity(double grossIncome);
double calcAnnualIncome(double grossMonthlyIncome, double netMonthlyIncome);
void displayMonthlySlip(double grossMonthlyIncome);
void displayAnnualSlip(double grossIncome, double netAnnualIncome);



int main() {
    char response;
    int numberOfYears;
    int numberOfAttempts = 3;
    double grossMonthlyIncome;
    double grossAnnualIncome, netAnnualIncome, annualIncomeTax, annualSocialSecurity, incomeOverPeriod;

    cout << "Enter Monthly income: " << endl;
    cin >> grossMonthlyIncome; 

    displayMonthlySlip(grossMonthlyIncome);
    cout << int(response);

    cout << "\nWould you want to expnad the summary to full annual summary? y/n: ";
    cin >> response;

    if (response == 'y' || response == 'Y')
    {
        cout << 20;
    }
    else if (response == 'n' || response == 'N')
    {
        cout << "Thank you" << endl;
    }
    else {
        cout << "Wrong. Try again" << endl;
    }

    
    return 0;
} 

double calcIncomeTax(double grossIncome) {
    double grossAfterSocialSecurity = grossIncome - calcSocialSecurity(grossIncome);
    return grossAfterSocialSecurity * INCOME_TAX_RATE;
}

double calcSocialSecurity(double grossIncome) {
    return grossIncome * SOCIAL_SECURITY_RATE;
}
/**
 * Calculates the net monthly income based on the gross monthly income.
 *
 * @param grossIncome The gross monthly income.
 * @return The calculated net monthly income.
 */
double calcMonthlyIncome(double grossIncome, double incomeTax, double socialSecurity) {
    double netMonthlyIncome;

    // Calculate the final net monthly income
    netMonthlyIncome = grossIncome - socialSecurity - incomeTax;

    return netMonthlyIncome;
}

void displayMonthlySlip(double grossMonthlyIncome) {
    double monthlySocialSecurity, monthlyIncomeTax, netMonthlyIncome;
    monthlySocialSecurity = calcSocialSecurity(grossMonthlyIncome);
    monthlyIncomeTax = calcIncomeTax(grossMonthlyIncome);

    netMonthlyIncome = calcMonthlyIncome(grossMonthlyIncome, monthlyIncomeTax, monthlySocialSecurity);

    cout << "--------------------------------SUMMARY OF MONTHLY INCOME------------------------" << endl;
    cout << "\tYour monthly gross income" << "\t\t\t\t\tGHc" << grossMonthlyIncome << endl;
    cout << "\tYour monthly Social Security Tax" << "\t\t\t\tGHc" << monthlySocialSecurity << endl;
    cout << "\tYour monthly Income Tax is GHc" <<  "\t\t\t\t\tGHc" << monthlyIncomeTax << endl;
    cout << "\tYour monthly net income is GHc" <<  "\t\t\t\t\tGHc" << netMonthlyIncome << endl;
    cout << "---------------------------------END OF SLIP---------------------------------------" << endl;
}