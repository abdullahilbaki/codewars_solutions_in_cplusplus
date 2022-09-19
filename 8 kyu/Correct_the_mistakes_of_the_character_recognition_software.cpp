#include <igloo/igloo_alt.h>
using namespace igloo;

// solution
#include <string>

std::string correct(std::string str) {
    std::string s = str;
    std::replace(s.begin(), s.end(), '5', 'S');
    std::replace(s.begin(), s.end(), '0', 'O');
    std::replace(s.begin(), s.end(), '1', 'I');
    return s;
}

// unit test
Describe(Correct) {
    It(BasicTests) {
        Assert::That(correct("1F-RUDYARD K1PL1NG"), Equals("IF-RUDYARD KIPLING"));
        Assert::That(correct("R0BERT MERLE - THE DAY 0F THE D0LPH1N"), Equals("ROBERT MERLE - THE DAY OF THE DOLPHIN"));
        Assert::That(correct("R1CHARD P. FEYNMAN - THE FEYNMAN LECTURE5 0N PHY51C5"), Equals("RICHARD P. FEYNMAN - THE FEYNMAN LECTURES ON PHYSICS"));
        Assert::That(correct("R1CHARD P. FEYNMAN - 5TAT15T1CAL MECHAN1C5"), Equals("RICHARD P. FEYNMAN - STATISTICAL MECHANICS"));
        Assert::That(correct("5TEPHEN HAWK1NG - A BR1EF H15T0RY 0F T1ME"), Equals("STEPHEN HAWKING - A BRIEF HISTORY OF TIME"));
        Assert::That(correct("5TEPHEN HAWK1NG - THE UN1VER5E 1N A NUT5HELL"), Equals("STEPHEN HAWKING - THE UNIVERSE IN A NUTSHELL"));
        Assert::That(correct("ERNE5T HEM1NGWAY - A FARWELL T0 ARM5"), Equals("ERNEST HEMINGWAY - A FARWELL TO ARMS"));
        Assert::That(correct("ERNE5T HEM1NGWAY - F0R WH0M THE BELL T0LL5"), Equals("ERNEST HEMINGWAY - FOR WHOM THE BELL TOLLS"));
        Assert::That(correct("ERNE5T HEM1NGWAY - THE 0LD MAN AND THE 5EA"), Equals("ERNEST HEMINGWAY - THE OLD MAN AND THE SEA"));
        Assert::That(correct("J. R. R. T0LK1EN - THE L0RD 0F THE R1NG5"), Equals("J. R. R. TOLKIEN - THE LORD OF THE RINGS"));
    }
};


int main()
{
    return TestRunner::RunAllTests();
}
