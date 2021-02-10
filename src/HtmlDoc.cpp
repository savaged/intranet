#include "HtmlDoc.h"

using namespace std;
using namespace cgicc;

void HtmlDoc::writeH1(const string& text)
{
    cout << h1(text) << endl;
}

void HtmlDoc::writeA(
        const std::string& link, const string& text)
{
    cout << a(text).set("href", link) << endl;
}

void HtmlDoc::writeHead(const string& titleText)
{
    cout << HTTPHTMLHeader() << endl;
    cout << HTMLDoctype(HTMLDoctype::eStrict) << endl;
    cout << html() << endl;
    cout << head(title(titleText)) << endl;
    cout << body() << endl;
}

void HtmlDoc::writeTail()
{
    cout << body() << endl;
    cout << html() << endl;
}

