// https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P13

#include <iostream>
#include <cmath>
using namespace std;
int primes[100001];

void sortValues(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sieveOfEratosthenes(int N)
{

    N += 2;
    primes[1] = 1;
    for (int i = 2; i < N; i++)
        primes[i] = i;
    for (int i = 4; i < N; i += 2)
        primes[i] = 2;
    for (int i = 3; i * i < N; i++)
    {
        if (primes[i] == i)
        {
            for (int j = i * i; j < N; j += i)
                if (primes[j] == j)
                    primes[j] = i;
        }
    }
}
void findPrimeFactors(int num)
{

    sieveOfEratosthenes(num);
    int factor;
    int count = 0;
    while (num != 1)
    {
        factor = primes[num];
        // cout << factor << " ";
        num /= factor;
    }
}

void find_multipliers(int current, int *factors, int *powers, int num_factors, int i, int *all_factors, int *factorIndex)
{
    // cout << endl;
    while (i < num_factors - 1)
    {
        int currentFactor = factors[i];
        int currentPower = powers[i];
        for (int j = 0; j <= currentPower; j++)
        {
            // cout << current << "*" << currentFactor << "^" << j << " ";
            // cout << factorIndex << ":" << current * pow(currentFactor, j) << " ";
            all_factors[(*factorIndex)++] = current * pow(currentFactor, j);
        }
    }
}

void find_factors(int *factors, int *powers, int num_factors, int *all_factors, int num_all_factors)
{
    int i = 0;
    int factorIndex = 0;
    if (num_factors == 1)
    {
        int currentFactor = factors[i];
        int currentPower = powers[i];
        for (int j = 0; j <= currentPower; j++)
        {
            find_multipliers(pow(currentFactor, j), factors, powers, num_factors, i, all_factors, &factorIndex);
        }
    }
    else
    {
        while (i < num_factors - 1)
        {
            int currentFactor = factors[i];
            int currentPower = powers[i];
            for (int j = 0; j <= currentPower; j++)
            {
                find_multipliers(pow(currentFactor, j), factors, powers, num_factors, i + 1, all_factors, &factorIndex);
            }
            i++;
        }
    }
}
int all_factors[100000];
int numOfFactors = 1;
void findAllFactors(int num)
{
    sieveOfEratosthenes(num);
    int factor;
    int prevFactor = 0;
    int exponents = 0;
    int exponentsArr[100000];
    int factors[100000];
    int count = 0;
    while (num != 1)
    {
        factor = primes[num];
        // cout << factor << " ";
        num /= factor;
        if (prevFactor == factor)
        {
            exponents++;
        }
        else
        {
            prevFactor = factor;
            // cout << prevFactor << " : prevFactor and " << exponents << "\n";
            if (exponents != 0)
            {
                exponentsArr[count] = exponents;
                count++;
                factors[count] = factor;
            }
            else
            {
                factors[count] = factor;
            }

            exponents = 1;
        }
    }
    exponentsArr[count] = exponents;

    for (int i = 0; i <= count; i++)
    {
        numOfFactors *= (exponentsArr[i] + 1);
        // cout << factors[i] << "is " << exponentsArr[i] << " times" << endl;
    }

    // cout << endl
    //      << "numOfFactors: " << numOfFactors << " " << endl;

    // find out the factors

    for (int i = 0; i < numOfFactors; i++)
    {
        int factor = 1;
        int idx = i;
        string x = "";
        for (int j = 0; j <= count; j++)
        {
            x += "(" + to_string(factors[j]) + "^" + to_string(idx % (exponentsArr[j] + 1)) + ")";
            factor *= pow(factors[j], idx % (exponentsArr[j] + 1));
            idx /= (exponentsArr[j] + 1);
        }
        // cout << factor << " ";
        all_factors[i] = factor;
    }

    // return;

    // find_factors(factors, exponentsArr, count + 1, all_factors, numOfFactors);

    // cout << endl
    //      << "numOfFactors: " << numOfFactors << " ";

    sortValues(all_factors, numOfFactors);

    // cout << "\nAnd they are"
    //      << ": ";
    // for (int i = 0; i < numOfFactors; i++)
    // {
    //     cout << all_factors[i] << " ";
    // }
    // cout << endl;
}

long getPerimeter(long l, long w)
{
    return 2 * (l + w);
}

int main()
{
    int N = 2;
    cin >> N;
    // cout << endl;

    findAllFactors(N);

    long perimeter = 99999999;
    for (int i = 0; i < ceil(numOfFactors / 2.0); i++)
    {
        long p = getPerimeter(all_factors[i], N / all_factors[i]);
        if (p < perimeter)
            perimeter = p;
    }
    // cout << endl;
    cout << perimeter << endl;

    puts("");
    return 0;
}