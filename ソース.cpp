#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Eagles {
    string name;
    int age;
    string number;
    string position;
    double era;
    double battingaverage;
};

void datafile(const vector<Eagles>& players) {
    vector<Eagles> pitchers;
    vector<Eagles> fielders;

    for (const auto& player : players) {
        if (player.position == "“Šè") {
            pitchers.push_back(player);
        }
        else {
            fielders.push_back(player);
        }
    }

    cout << "< “Šè–¼ŠÓ >\n";
    sort(pitchers.begin(), pitchers.end(), [](const Eagles& a, const Eagles& b) {
        return a.era < b.era;
        });
    for (const auto& player : pitchers) {
        cout << "–¼‘O: " << player.name << "(" << player.age << ")" << "\n";
        cout << "”w”Ô†: " << player.number << "\n";
        cout << "ƒ|ƒWƒVƒ‡ƒ“: " << player.position << "\n";
        if (player.era != 100) {
            cout << "–hŒä—¦: " << player.era << "\n";
        }
        else {
            cout << "–hŒä—¦: ‹L˜^‚È‚µ\n";
        }
        cout << "---------------------------------\n";
    }

    cout << "< –ìè–¼ŠÓ >\n";
    sort(fielders.begin(), fielders.end(), [](const Eagles& a, const Eagles& b) {
        return a.battingaverage > b.battingaverage;
        });
    for (const auto& player : fielders) {
        cout << "–¼‘O: " << player.name << "(" << player.age << ")" << "\n";
        cout << "”w”Ô†: " << player.number << "\n";
        cout << "ƒ|ƒWƒVƒ‡ƒ“: " << player.position << "\n";
        if (player.battingaverage != 0.0) {
            cout << "‘Å—¦: " << player.battingaverage << "\n";
        }
        else {
            cout << "‘Å—¦: ‹L˜^‚È‚µ\n";
        }

        cout << "---------------------------------\n";
    }
}

void write(const  vector<Eagles>& players) {
    ofstream infile("eagles.txt");
    if (!infile) {
        cout << "ƒtƒ@ƒCƒ‹‚ªŒ©‚Â‚©‚ç‚È‚¢B" << endl;
    }

    for (const auto& player : players) {
        infile << player.name << ","
            << player.age << ","
            << player.number << ","
            << player.position << ","
            << player.era << ","
            << player.battingaverage << "\n";
    }

    infile.close();
}

Eagles searchnumber(const vector<Eagles>& players, const string& number) {
    for (const auto& player : players) {
        if (player.number == number) {
            return player;
        }
    }

    return { "", 0,"", "", 0.0, 0.0 };
}

vector<Eagles> searchposition(const vector<Eagles>& players, const string& position) {
    vector<Eagles> searchedpositon;
    for (const auto& player : players) {
        if (player.position == position) {
            searchedpositon.push_back(player);
        }
    }
    return searchedpositon;
}

int main() {
    vector<Eagles> players;

    Eagles player1;
    player1.name = "¼ˆä—S÷";
    player1.age = 27;
    player1.number = "1";
    player1.position = "“Šè";
    player1.era = 0.55;
    player1.battingaverage = 0.0;
    players.push_back(player1);

    Eagles player2;
    player2.name = "ŠİF”V";
    player2.age = 38;
    player2.number = "11";
    player2.position = "“Šè";
    player2.era = 3.19;
    player2.battingaverage = 0.0;
    players.push_back(player2);

    Eagles player3;
    player3.name = "ƒ}ƒj[Eƒoƒjƒ…ƒGƒƒX";
    player3.age = 32;
    player3.number = "13";
    player3.position = "“Šè";
    player3.era = 81.00;
    player3.battingaverage = 0.0;
    players.push_back(player3);

    Eagles player4;
    player4.name = "‘¥–{V‘å";
    player4.age = 32;
    player4.number = "14";
    player4.position = "“Šè";
    player4.era = 2.93;
    player4.battingaverage = 0.0;
    players.push_back(player4);

    Eagles player5;
    player5.name = "‰–Œ©‹M—m";
    player5.age = 34;
    player5.number = "17";
    player5.position = "“Šè";
    player5.era = 100;
    player5.battingaverage = 0.0;
    players.push_back(player5);

    Eagles player6;
    player6.name = "“c’†«‘å";
    player6.age = 34;
    player6.number = "18";
    player6.position = "“Šè";
    player6.era = 4.43;
    player6.battingaverage = 0.0;
    players.push_back(player6);

    Eagles player7;
    player7.name = "‘‘iN½";
    player7.age = 22;
    player7.number = "19";
    player7.position = "“Šè";
    player7.era = 3.07;
    player7.battingaverage = 0.0;
    players.push_back(player7);

    Eagles player8;
    player8.name = "ˆÀŠy’q‘å";
    player8.age = 26;
    player8.number = "20";
    player8.position = "“Šè";
    player8.era = 3.19;
    player8.battingaverage = 0.0;
    players.push_back(player8);

    Eagles player9;
    player9.name = "‘ì—²‹v";
    player9.age = 25;
    player9.number = "21";
    player9.position = "“Šè";
    player9.era = 2.69;
    player9.battingaverage = 0.0;
    players.push_back(player9);

    Eagles player10;
    player10.name = "¬‘·—³“ñ";
    player10.age = 25;
    player10.number = "22";
    player10.position = "“Šè";
    player10.era = 9.00;
    player10.battingaverage = 0.0;
    players.push_back(player10);

    Eagles player11;
    player11.name = "ğˆä’mj";
    player11.age = 30;
    player11.number = "28";
    player11.position = "“Šè";
    player11.era = 3.62;
    player11.battingaverage = 0.0;
    players.push_back(player11);

    Eagles player12;
    player12.name = "‚“cFˆê";
    player12.age = 25;
    player12.number = "29";
    player12.position = "“Šè";
    player12.era = 2.25;
    player12.battingaverage = 0.0;
    players.push_back(player12);

    Eagles player13;
    player13.name = "“n•ÓãÄ‘¾";
    player13.age = 22;
    player13.number = "31";
    player13.position = "“Šè";
    player13.era = 1.31;
    player13.battingaverage = 0.0;
    players.push_back(player13);

    Eagles player14;
    player14.name = "‹|í”¹l";
    player14.age = 29;
    player14.number = "38";
    player14.position = "“Šè";
    player14.era = 4.32;
    player14.battingaverage = 0.0;
    players.push_back(player14);

    Eagles player15;
    player15.name = "“àŠÔ‘ñ”n";
    player15.age = 24;
    player15.number = "40";
    player15.position = "“Šè";
    player15.era = 100;
    player15.battingaverage = 0.0;
    players.push_back(player15);

    Eagles player16;
    player16.name = "ˆÉ“¡ä‰›";
    player16.age = 22;
    player16.number = "41";
    player16.position = "“Šè";
    player16.era = 3.12;
    player16.battingaverage = 0.0;
    players.push_back(player16);

    Eagles player17;
    player17.name = "‘v‰Æ‹";
    player17.age = 30;
    player17.number = "43";
    player17.position = "“Šè";
    player17.era = 3.29;
    player17.battingaverage = 0.0;
    players.push_back(player17);

    Eagles player18;
    player18.name = "¼ˆä—F”ò";
    player18.age = 23;
    player18.number = "45";
    player18.position = "“Šè";
    player18.era = 2.45;
    player18.battingaverage = 0.0;
    players.push_back(player18);

    Eagles player19;
    player19.name = "“¡•½®^";
    player19.age = 24;
    player19.number = "46";
    player19.position = "“Šè";
    player19.era = 5.03;
    player19.battingaverage = 0.0;
    players.push_back(player19);

    Eagles player20;
    player20.name = "“¡ˆä¹";
    player20.age = 26;
    player20.number = "47";
    player20.position = "“Šè";
    player20.era = 2.19;
    player20.battingaverage = 0.0;
    players.push_back(player20);

    Eagles player21;
    player21.name = "¼Š_‰ë–î";
    player21.age = 24;
    player21.number = "49";
    player21.position = "“Šè";
    player21.era = 81.00;
    player21.battingaverage = 0.0;
    players.push_back(player21);

    Eagles player22;
    player22.name = "’Ã—¯è‘å¬";
    player22.age = 25;
    player22.number = "52";
    player22.position = "“Šè";
    player22.era = 1.86;
    player22.battingaverage = 0.0;
    players.push_back(player22);

    Eagles player23;
    player23.name = "ûü“c–G¶";
    player23.age = 25;
    player23.number = "53";
    player23.position = "“Šè";
    player23.era = 100;
    player23.battingaverage = 0.0;
    players.push_back(player23);

    Eagles player24;
    player24.name = "—é–ØãÄ“V";
    player24.age = 26;
    player24.number = "56";
    player24.position = "“Šè";
    player24.era = 3.54;
    player24.battingaverage = 0.0;
    players.push_back(player24);

    Eagles player25;
    player25.name = "‘ê’†—Ä‘¾";
    player25.age = 28;
    player25.number = "57";
    player25.position = "“Šè";
    player25.era = 3.83;
    player25.battingaverage = 0.0;
    players.push_back(player25);

    Eagles player26;
    player26.name = "h“‡q";
    player26.age = 32;
    player26.number = "58";
    player26.position = "“Šè";
    player26.era = 4.03;
    player26.battingaverage = 0.0;
    players.push_back(player26);

    Eagles player27;
    player27.name = "‘×Ÿ—˜";
    player27.age = 19;
    player27.number = "59";
    player27.position = "“Šè";
    player27.era = 100;
    player27.battingaverage = 0.0;
    players.push_back(player27);

    Eagles player28;
    player28.name = "Î‹´—Ç‘¾";
    player28.age = 32;
    player28.number = "60";
    player28.position = "“Šè";
    player28.era = 18.90;
    player28.battingaverage = 0.0;
    players.push_back(player28);

    Eagles player29;
    player29.name = "¼Œû’¼l";
    player29.age = 26;
    player29.number = "62";
    player29.position = "“Šè";
    player29.era = 4.56;
    player29.battingaverage = 0.0;
    players.push_back(player29);

    Eagles player30;
    player30.name = "—Ñ—D÷";
    player30.age = 21;
    player30.number = "64";
    player30.position = "“Šè";
    player30.era = 100;
    player30.battingaverage = 0.0;
    players.push_back(player30);

    Eagles player31;
    player31.name = "¬•õV—¤";
    player31.age = 21;
    player31.number = "68";
    player31.position = "“Šè";
    player31.era = 100;
    player31.battingaverage = 0.0;
    players.push_back(player31);

    Eagles player32;
    player32.name = "“à¯—´";
    player32.age = 21;
    player32.number = "69";
    player32.position = "“Šè";
    player32.era = 2.62;
    player32.battingaverage = 0.0;
    players.push_back(player32);

    Eagles player33;
    player33.name = "‹gì—Y‘å";
    player33.age = 26;
    player33.number = "71";
    player33.position = "“Šè";
    player33.era = 100;
    player33.battingaverage = 0.0;
    players.push_back(player33);

    Eagles player34;
    player34.name = "‹{X’qu";
    player34.age = 25;
    player34.number = "72";
    player34.position = "“Šè";
    player34.era = 7.07;
    player34.battingaverage = 0.0;
    players.push_back(player34);

    Eagles player35;
    player35.name = "²“¡’q‹P";
    player35.age = 23;
    player35.number = "001";
    player35.position = "“Šè";
    player35.era = 100;
    player35.battingaverage = 0.0;
    players.push_back(player35);

    Eagles player36;
    player36.name = "ˆø’nGˆê˜Y";
    player36.age = 23;
    player36.number = "004";
    player36.position = "“Šè";
    player36.era = 100;
    player36.battingaverage = 0.0;
    players.push_back(player36);

    Eagles player37;
    player37.name = "•ŸX—s”n";
    player37.age = 25;
    player37.number = "007";
    player37.position = "“Šè";
    player37.era = 100;
    player37.battingaverage = 0.0;
    players.push_back(player37);

    Eagles player38;
    player38.name = "‰¤•F’ö";
    player38.age = 22;
    player38.number = "017";
    player38.position = "“Šè";
    player38.era = 100;
    player38.battingaverage = 0.0;
    players.push_back(player38);

    Eagles player39;
    player39.name = "ŒÃ‰êN½";
    player39.age = 18;
    player39.number = "130";
    player39.position = "“Šè";
    player39.era = 100;
    player39.battingaverage = 0.0;
    players.push_back(player39);

    Eagles player40;
    player40.name = "´‹{ŒÕ‘½˜N";
    player40.age = 23;
    player40.number = "135";
    player40.position = "“Šè";
    player40.era = 100;
    player40.battingaverage = 0.0;
    players.push_back(player40);

    Eagles player41;
    player41.name = "’|‰º‰lL";
    player41.age = 23;
    player41.number = "155";
    player41.position = "“Šè";
    player41.era = 100;
    player41.battingaverage = 0.0;
    players.push_back(player41);

    Eagles player42;
    player42.name = "‘¾“cŒõ";
    player42.age = 26;
    player42.number = "2";
    player42.position = "•ßè";
    player42.era = 100;
    player42.battingaverage = 0.262;
    players.push_back(player42);

    Eagles player43;
    player43.name = "’Y’J‹âm˜N";
    player43.age = 30;
    player43.number = "26";
    player43.position = "•ßè";
    player43.era = 100;
    player43.battingaverage = 0.215;
    players.push_back(player43);

    Eagles player44;
    player44.name = "“c’†‹M–ç";
    player44.age = 30;
    player44.number = "44";
    player44.position = "•ßè";
    player44.era = 100;
    player44.battingaverage = 0.0;
    players.push_back(player44);

    Eagles player45;
    player45.name = "ˆÀ“c—I”n";
    player45.age = 23;
    player45.number = "55";
    player45.position = "•ßè";
    player45.era = 100;
    player45.battingaverage = 0.226;
    players.push_back(player45);

    Eagles player46;
    player46.name = "–x“àŒªŒŞ";
    player46.age = 26;
    player46.number = "65";
    player46.position = "•ßè";
    player46.era = 100;
    player46.battingaverage = 0.0;
    players.push_back(player46);

    Eagles player47;
    player47.name = "ÎŒ´•V";
    player47.age = 24;
    player47.number = "70";
    player47.position = "•ßè";
    player47.era = 100;
    player47.battingaverage = 0.0;
    players.push_back(player47);

    Eagles player48;
    player48.name = "…ãŒj";
    player48.age = 22;
    player48.number = "022";
    player48.position = "•ßè";
    player48.era = 100;
    player48.battingaverage = 0.0;
    players.push_back(player48);

    Eagles player49;
    player49.name = "]ì˜Ğ“l";
    player49.age = 22;
    player49.number = "137";
    player49.position = "•ßè";
    player49.era = 100;
    player49.battingaverage = 0.0;
    players.push_back(player49);

    Eagles player50;
    player50.name = "¬[“c‘åãÄ";
    player50.age = 27;
    player50.number = "0";
    player50.position = "“à–ìè";
    player50.era = 100;
    player50.battingaverage = 0.245;
    players.push_back(player50);

    Eagles player51;
    player51.name = "ó‘º‰h“l";
    player51.age = 32;
    player51.number = "3";
    player51.position = "“à–ìè";
    player51.era = 100;
    player51.battingaverage = 0.275;
    players.push_back(player51);

    Eagles player52;
    player52.name = "ˆ¢•”õ÷";
    player52.age = 33;
    player52.number = "4";
    player52.position = "“à–ìè";
    player52.era = 100;
    player52.battingaverage = 0.182;
    players.push_back(player52);

    Eagles player53;
    player53.name = "–Î–Ø‰hŒÜ˜Y";
    player53.age = 29;
    player53.number = "5";
    player53.position = "“à–ìè";
    player53.era = 100;
    player53.battingaverage = 0.083;
    players.push_back(player53);

    Eagles player54;
    player54.name = "—é–Ø‘å’n";
    player54.age = 33;
    player54.number = "7";
    player54.position = "“à–ìè";
    player54.era = 100;
    player54.battingaverage = 0.269;
    players.push_back(player54);

    Eagles player55;
    player55.name = "ƒ}ƒCƒPƒ‹Eƒtƒ‰ƒ“ƒR";
    player55.age = 33;
    player55.number = "23";
    player55.position = "“à–ìè";
    player55.era = 100;
    player55.battingaverage = 0.2;
    players.push_back(player55);

    Eagles player56;
    player56.name = "•ìj—z";
    player56.age = 22;
    player56.number = "24";
    player56.position = "“à–ìè";
    player56.era = 100;
    player56.battingaverage = 0.091;
    players.push_back(player56);

    Eagles player57;
    player57.name = "•½—³Æ";
    player57.age = 25;
    player57.number = "30";
    player57.position = "“à–ìè";
    player57.era = 100;
    player57.battingaverage = 0.0;
    players.push_back(player57);

    Eagles player58;
    player58.name = "‹âŸ";
    player58.age = 35;
    player58.number = "33";
    player58.position = "“à–ìè";
    player58.era = 100;
    player58.battingaverage = 0.0;
    players.push_back(player58);

    Eagles player59;
    player59.name = "Rè„";
    player59.age = 27;
    player59.number = "34";
    player59.position = "“à–ìè";
    player59.era = 100;
    player59.battingaverage = 0.214;
    players.push_back(player59);

    Eagles player60;
    player60.name = "ˆÉ“¡—T‹G–ç";
    player60.age = 26;
    player60.number = "39";
    player60.position = "“à–ìè";
    player60.era = 100;
    player60.battingaverage = 0.253;
    players.push_back(player60);

    Eagles player61;
    player61.name = "ƒNƒŠƒXEƒMƒbƒeƒ“ƒX";
    player61.age = 29;
    player61.number = "42";
    player61.position = "“à–ìè";
    player61.era = 100;
    player61.battingaverage = 0.0;
    players.push_back(player61);

    Eagles player62;
    player62.name = "“nç²‰À–¾";
    player62.age = 26;
    player62.number = "48";
    player62.position = "“à–ìè";
    player62.era = 100;
    player62.battingaverage = 0.150;
    players.push_back(player62);

    Eagles player63;
    player63.name = "‰¡”örŒš";
    player63.age = 30;
    player63.number = "61";
    player63.position = "“à–ìè";
    player63.era = 100;
    player63.battingaverage = 0.0;
    players.push_back(player63);

    Eagles player64;
    player64.name = "“ü]‘å÷";
    player64.age = 21;
    player64.number = "63";
    player64.position = "“à–ìè";
    player64.era = 100;
    player64.battingaverage = 0.0;
    players.push_back(player64);

    Eagles player65;
    player65.name = "‘º—Ñˆê÷";
    player65.age = 25;
    player65.number = "66";
    player65.position = "“à–ìè";
    player65.era = 100;
    player65.battingaverage = 0.307;
    players.push_back(player65);

    Eagles player66;
    player66.name = "’CŒ©ƒ”V‰î";
    player66.age = 22;
    player66.number = "78";
    player66.position = "“à–ìè";
    player66.era = 100;
    player66.battingaverage = 0.0;
    players.push_back(player66);

    Eagles player67;
    player67.name = "‰i“céD‘¾˜Y";
    player67.age = 22;
    player67.number = "131";
    player67.position = "“à–ìè";
    player67.era = 100;
    player67.battingaverage = 0.0;
    players.push_back(player67);

    Eagles player68;
    player68.name = "ƒGƒXƒ^ƒ~[EƒEƒŒ[ƒjƒƒ";
    player68.age = 24;
    player68.number = "138";
    player68.position = "“à–ìè";
    player68.era = 100;
    player68.battingaverage = 0.0;
    players.push_back(player68);

    Eagles player69;
    player69.name = "àV–ì¹—I";
    player69.age = 22;
    player69.number = "141";
    player69.position = "“à–ìè";
    player69.era = 100;
    player69.battingaverage = 0.0;
    players.push_back(player69);

    Eagles player70;
    player70.name = "¼ì—y‹P";
    player70.age = 31;
    player70.number = "6";
    player70.position = "ŠO–ìè";
    player70.era = 100;
    player70.battingaverage = 0.164;
    players.push_back(player70);

    Eagles player71;
    player71.name = "’CŒÈ—Á‰î";
    player71.age = 26;
    player71.number = "8";
    player71.position = "ŠO–ìè";
    player71.era = 100;
    player71.battingaverage = 0.227;
    players.push_back(player71);

    Eagles player72;
    player72.name = "‹g–ì‘nm";
    player72.age = 19;
    player72.number = "9";
    player72.position = "ŠO–ìè";
    player72.era = 100;
    player72.battingaverage = 0.0;
    players.push_back(player72);

    Eagles player73;
    player73.name = "“c’†˜aŠî";
    player73.age = 28;
    player73.number = "25";
    player73.position = "ŠO–ìè";
    player73.era = 100;
    player73.battingaverage = 0.097;
    players.push_back(player73);

    Eagles player74;
    player74.name = "‰ª“‡‹˜Y";
    player74.age = 33;
    player74.number = "27";
    player74.position = "ŠO–ìè";
    player74.era = 100;
    player74.battingaverage = 0.264;
    players.push_back(player74);

    Eagles player75;
    player75.name = "“‡“àG–¾";
    player75.age = 33;
    player75.number = "35";
    player75.position = "ŠO–ìè";
    player75.era = 100;
    player75.battingaverage = 0.177;
    players.push_back(player75);

    Eagles player76;
    player76.name = "‘O“c‹â¡";
    player76.age = 19;
    player76.number = "36";
    player76.position = "ŠO–ìè";
    player76.era = 100;
    player76.battingaverage = 0.0;
    players.push_back(player76);

    Eagles player77;
    player77.name = "•“¡“Ö‹M";
    player77.age = 22;
    player77.number = "50";
    player77.position = "ŠO–ìè";
    player77.era = 100;
    player77.battingaverage = 0.0;
    players.push_back(player77);

    Eagles player78;
    player78.name = "¬‹½—TÆ";
    player78.age = 26;
    player78.number = "51";
    player78.position = "ŠO–ìè";
    player78.era = 100;
    player78.battingaverage = 0.276;
    players.push_back(player78);

    Eagles player79;
    player79.name = "˜a“c—ö";
    player79.age = 27;
    player79.number = "54";
    player79.position = "ŠO–ìè";
    player79.era = 100;
    player79.battingaverage = 0.200;
    players.push_back(player79);

    Eagles player80;
    player80.name = "³ç¬—D–í";
    player80.age = 27;
    player80.number = "64";
    player80.position = "ŠO–ìè";
    player80.era = 100;
    player80.battingaverage = 0.000;
    players.push_back(player80);

    Eagles player81;
    player81.name = "–öàV‘å‹ó";
    player81.age = 20;
    player81.number = "142";
    player81.position = "ŠO–ìè";
    player81.era = 100;
    player81.battingaverage = 0.0;
    players.push_back(player81);

    Eagles player82;
    player82.name = "‘å‰ÍŒ´ãÄ";
    player82.age = 19;
    player82.number = "144";
    player82.position = "ŠO–ìè";
    player82.era = 100;
    player82.battingaverage = 0.0;
    players.push_back(player82);

    write(players);

    datafile(players);

    cout << "’²‚×‚½‚¢”w”Ô†‚ğ“ü—Í‚µ‚ÄAEnterƒL[‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢B\n";

    cout << "’²‚×‚½‚¢ƒ|ƒWƒVƒ‡ƒ“‚ğ“ü—Í‚µ‚ÄAEnterƒL[‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢(ctrl+z‚ÅƒvƒƒOƒ‰ƒ€‚ÌI—¹jB\n";

    string SearchNumber;
    string SearchPosition;
    while (cin >> SearchNumber >> SearchPosition) {
        Eagles searchplayer = searchnumber(players, SearchNumber);
        if (searchplayer.name != "") {
            cout << "\n”w”Ô† " << "<" << SearchNumber << ">" << " ‚Ì‘Ièî•ñ\n";
            cout << "–¼‘O: " << searchplayer.name << "(" << searchplayer.age << ")" << "\n";
            cout << "ƒ|ƒWƒVƒ‡ƒ“: " << searchplayer.position << "\n";
            if (searchplayer.era != 100) {
                cout << "–hŒä—¦: " << searchplayer.era << "\n";
            }
            else {
                cout << "–hŒä—¦: ‹L˜^‚È‚µ\n";
            }
            if (searchplayer.battingaverage != 0.0) {
                cout << "‘Å—¦: " << searchplayer.battingaverage << "\n";
            }
            else {
                cout << "‘Å—¦: ‹L˜^‚È‚µ\n";
            }
            cout << "*****************************************************\n";
        }
        else {
            cout << "\n”w”Ô† " << "<" << SearchNumber << ">" << " ‚Ì‘Iè‚ÍŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
            cout << "*****************************************************\n";
        }

        vector<Eagles> Searchposition = searchposition(players, SearchPosition);
        if (!Searchposition.empty()) {
            cout << "ƒ|ƒWƒVƒ‡ƒ“‚ª" << "\n" << "<" << SearchPosition << ">" << " ‚Ì‘Ièˆê——\n";
            for (const auto& player : Searchposition) {
                cout << "–¼‘O: " << player.name << "(" << player.age << ")" << "\n";
                std::cout << "”w”Ô†: " << player.number << "\n";
                if (player.era != 100) {
                    cout << "–hŒä—¦: " << player.era << "\n";
                }
                else {
                    cout << "–hŒä—¦: ‹L˜^‚È‚µ\n";
                }
                if (player.battingaverage != 0.0) {
                    cout << "‘Å—¦: " << player.battingaverage << "\n";
                }
                else {
                    cout << "‘Å—¦: ‹L˜^‚È‚µ\n";
                }
                std::cout << "---------------------------------\n";
            }
        }
        else {
            std::cout << "ƒ|ƒWƒVƒ‡ƒ“‚ª\n" << "<" << SearchPosition << ">" << " ‚Ì‘Iè‚ÍŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
        }
    }
    return 0;
}
