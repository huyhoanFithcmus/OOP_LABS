#include "Header.h"

RandomIntegerGenerator::RandomIntegerGenerator()
{
	srand(time(NULL));
}

long long RandomIntegerGenerator::next(long long left, long long right)
{
	return (rand() % (right - left + 1)) + left;
}

string string_star::reverseStr(string &str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);

	return str;
}

bool IntegerToThousandSeparatedUIConverter::isValidFormat(string s)
{
	if (s[s.length() - 4] == '.')
	{
		for (int i = s.length() - 4; i >= 0; i = i - 3)
		{
			if (s[i] != '.')
			{
				return false;
			}
			break;
		}
		return true;
	}
	else
	{
		return false;
	}
}

string IntegerToThousandSeparatedUIConverter::convert(int value)
{
    string ans = "";

    // Convert the given integer
    // to equivalent string
    string num = to_string(value);

    // Initialise count
    int count = 0;

    // Traverse the string in reverse
    for (int i = num.size() - 1;
        i >= 0; i--) {
        count++;
        ans.push_back(num[i]);

        // If three characters
        // are traversed
        if (count == 3) {
            ans.push_back('.');
            count = 0;
        }
    }

    // Reverse the string to get
    // the desired output
    reverse(ans.begin(), ans.end());

    // If the given string is
    // less than 1000
    if (ans.size() % 4 == 0) {

        // Remove ','
        ans.erase(ans.begin());
    }

    return ans;
}

tuple<bool, int, string, int> IntegerToThousandSeparatedUIConverter::convertBack(string s)
{
    bool check = true;
    int coverted = 1;
    string message = "succeeded";
    int error_code = 0;

    tuple <bool, int, string, int> result = make_tuple(check, coverted, message, error_code);
    
    if (IntegerToThousandSeparatedUIConverter::isValidFormat(s) == true)
        return result;
    else
    {
        get<1>(result) = 0;
        get<0>(result) = false;
        get<2>(result) = "failed to convert";
        get<3>(result) = 1;
    }
}

bool IntegerToCurrencyUIConverter::isValidFormat(string s)
{
    if (s[s.length() - 1] == 'd')
    {
        if (s[s.length() - 5] == '.')
        {
            for (int i = s.length() - 5; i >= 0; i = i - 3)
            {
                if (s[i] != '.')
                {
                    return false;
                }
                break;
            }
            return true;
        }
        else
        {
            return false;
        }
    }
    else
        return false;
}

string IntegerToCurrencyUIConverter::convert(int value)
{
    string ans = "";

    // Convert the given integer
    // to equivalent string
    string num = to_string(value);

    // Initialise count
    int count = 0;

    // Traverse the string in reverse
    for (int i = num.size() - 1;
        i >= 0; i--) {
        count++;
        ans.push_back(num[i]);

        // If three characters
        // are traversed
        if (count == 3) {
            ans.push_back('.');
            count = 0;
        }
    }

    // Reverse the string to get
    // the desired output
    reverse(ans.begin(), ans.end());

    // If the given string is
    // less than 1000
    if (ans.size() % 4 == 0) {

        // Remove ','
        ans.erase(ans.begin());
    }

    return ans + "d";
}

tuple<bool, int, string, int> IntegerToCurrencyUIConverter::convertBack(string s)
{
    bool check = true;
    int coverted = 1;
    string message = "succeeded";
    int error_code = 0;

    tuple <bool, int, string, int> result = make_tuple(check, coverted, message, error_code);

    if (IntegerToCurrencyUIConverter::isValidFormat(s) == true)
        return result;
    else
    {
        get<1>(result) = 0;
        get<0>(result) = false;
        get<2>(result) = "failed to convert";
        get<3>(result) = 1;
    }
}

long long IntegerToCurrencyUIConverter::covert_int(string s)
{
    string ans = "";

    // Convert the given integer
    // to equivalent string

    // Initialise count
    int count = 0;

    // Traverse the string in reverse
    for (int i = s.size() - 1;
        i >= 0; i--) {
        count++;
        if (s[i] != '.')
        {
            ans.push_back(s[i]);
        }
    }

    // Reverse the string to get
    // the desired output
    reverse(ans.begin(), ans.end());


    return stoll(ans);
}