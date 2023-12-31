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
        if (player.position == "投手") {
            pitchers.push_back(player);
        }
        else {
            fielders.push_back(player);
        }
    }

    cout << "< 投手名鑑 >\n";
    sort(pitchers.begin(), pitchers.end(), [](const Eagles& a, const Eagles& b) {
        return a.era < b.era;
        });
    for (const auto& player : pitchers) {
        cout << "名前: " << player.name << "(" << player.age << ")" << "\n";
        cout << "背番号: " << player.number << "\n";
        cout << "ポジション: " << player.position << "\n";
        if (player.era != 100) {
            cout << "防御率: " << player.era << "\n";
        }
        else {
            cout << "防御率: 記録なし\n";
        }
        cout << "---------------------------------\n";
    }

    cout << "< 野手名鑑 >\n";
    sort(fielders.begin(), fielders.end(), [](const Eagles& a, const Eagles& b) {
        return a.battingaverage > b.battingaverage;
        });
    for (const auto& player : fielders) {
        cout << "名前: " << player.name << "(" << player.age << ")" << "\n";
        cout << "背番号: " << player.number << "\n";
        cout << "ポジション: " << player.position << "\n";
        if (player.battingaverage != 0.0) {
            cout << "打率: " << player.battingaverage << "\n";
        }
        else {
            cout << "打率: 記録なし\n";
        }

        cout << "---------------------------------\n";
    }
}

void write(const  vector<Eagles>& players) {
    ofstream infile("eagles.txt");
    if (!infile) {
        cout << "ファイルが見つからない。" << endl;
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
    player1.name = "松井祐樹";
    player1.age = 27;
    player1.number = "1";
    player1.position = "投手";
    player1.era = 0.55;
    player1.battingaverage = 0.0;
    players.push_back(player1);

    Eagles player2;
    player2.name = "岸孝之";
    player2.age = 38;
    player2.number = "11";
    player2.position = "投手";
    player2.era = 3.19;
    player2.battingaverage = 0.0;
    players.push_back(player2);

    Eagles player3;
    player3.name = "マニー・バニュエロス";
    player3.age = 32;
    player3.number = "13";
    player3.position = "投手";
    player3.era = 81.00;
    player3.battingaverage = 0.0;
    players.push_back(player3);

    Eagles player4;
    player4.name = "則本昂大";
    player4.age = 32;
    player4.number = "14";
    player4.position = "投手";
    player4.era = 2.93;
    player4.battingaverage = 0.0;
    players.push_back(player4);

    Eagles player5;
    player5.name = "塩見貴洋";
    player5.age = 34;
    player5.number = "17";
    player5.position = "投手";
    player5.era = 100;
    player5.battingaverage = 0.0;
    players.push_back(player5);

    Eagles player6;
    player6.name = "田中将大";
    player6.age = 34;
    player6.number = "18";
    player6.position = "投手";
    player6.era = 4.43;
    player6.battingaverage = 0.0;
    players.push_back(player6);

    Eagles player7;
    player7.name = "荘司康誠";
    player7.age = 22;
    player7.number = "19";
    player7.position = "投手";
    player7.era = 3.07;
    player7.battingaverage = 0.0;
    players.push_back(player7);

    Eagles player8;
    player8.name = "安楽智大";
    player8.age = 26;
    player8.number = "20";
    player8.position = "投手";
    player8.era = 3.19;
    player8.battingaverage = 0.0;
    players.push_back(player8);

    Eagles player9;
    player9.name = "早川隆久";
    player9.age = 25;
    player9.number = "21";
    player9.position = "投手";
    player9.era = 2.69;
    player9.battingaverage = 0.0;
    players.push_back(player9);

    Eagles player10;
    player10.name = "小孫竜二";
    player10.age = 25;
    player10.number = "22";
    player10.position = "投手";
    player10.era = 9.00;
    player10.battingaverage = 0.0;
    players.push_back(player10);

    Eagles player11;
    player11.name = "酒井知史";
    player11.age = 30;
    player11.number = "28";
    player11.position = "投手";
    player11.era = 3.62;
    player11.battingaverage = 0.0;
    players.push_back(player11);

    Eagles player12;
    player12.name = "高田孝一";
    player12.age = 25;
    player12.number = "29";
    player12.position = "投手";
    player12.era = 2.25;
    player12.battingaverage = 0.0;
    players.push_back(player12);

    Eagles player13;
    player13.name = "渡辺翔太";
    player13.age = 22;
    player13.number = "31";
    player13.position = "投手";
    player13.era = 1.31;
    player13.battingaverage = 0.0;
    players.push_back(player13);

    Eagles player14;
    player14.name = "弓削隼人";
    player14.age = 29;
    player14.number = "38";
    player14.position = "投手";
    player14.era = 4.32;
    player14.battingaverage = 0.0;
    players.push_back(player14);

    Eagles player15;
    player15.name = "内間拓馬";
    player15.age = 24;
    player15.number = "40";
    player15.position = "投手";
    player15.era = 100;
    player15.battingaverage = 0.0;
    players.push_back(player15);

    Eagles player16;
    player16.name = "伊藤茉央";
    player16.age = 22;
    player16.number = "41";
    player16.position = "投手";
    player16.era = 3.12;
    player16.battingaverage = 0.0;
    players.push_back(player16);

    Eagles player17;
    player17.name = "宋家豪";
    player17.age = 30;
    player17.number = "43";
    player17.position = "投手";
    player17.era = 3.29;
    player17.battingaverage = 0.0;
    players.push_back(player17);

    Eagles player18;
    player18.name = "松井友飛";
    player18.age = 23;
    player18.number = "45";
    player18.position = "投手";
    player18.era = 2.45;
    player18.battingaverage = 0.0;
    players.push_back(player18);

    Eagles player19;
    player19.name = "藤平尚真";
    player19.age = 24;
    player19.number = "46";
    player19.position = "投手";
    player19.era = 5.03;
    player19.battingaverage = 0.0;
    players.push_back(player19);

    Eagles player20;
    player20.name = "藤井聖";
    player20.age = 26;
    player20.number = "47";
    player20.position = "投手";
    player20.era = 2.19;
    player20.battingaverage = 0.0;
    players.push_back(player20);

    Eagles player21;
    player21.name = "西垣雅矢";
    player21.age = 24;
    player21.number = "49";
    player21.position = "投手";
    player21.era = 81.00;
    player21.battingaverage = 0.0;
    players.push_back(player21);

    Eagles player22;
    player22.name = "津留崎大成";
    player22.age = 25;
    player22.number = "52";
    player22.position = "投手";
    player22.era = 1.86;
    player22.battingaverage = 0.0;
    players.push_back(player22);

    Eagles player23;
    player23.name = "��田萌生";
    player23.age = 25;
    player23.number = "53";
    player23.position = "投手";
    player23.era = 100;
    player23.battingaverage = 0.0;
    players.push_back(player23);

    Eagles player24;
    player24.name = "鈴木翔天";
    player24.age = 26;
    player24.number = "56";
    player24.position = "投手";
    player24.era = 3.54;
    player24.battingaverage = 0.0;
    players.push_back(player24);

    Eagles player25;
    player25.name = "滝中瞭太";
    player25.age = 28;
    player25.number = "57";
    player25.position = "投手";
    player25.era = 3.83;
    player25.battingaverage = 0.0;
    players.push_back(player25);

    Eagles player26;
    player26.name = "辛島航";
    player26.age = 32;
    player26.number = "58";
    player26.position = "投手";
    player26.era = 4.03;
    player26.battingaverage = 0.0;
    players.push_back(player26);

    Eagles player27;
    player27.name = "泰勝利";
    player27.age = 19;
    player27.number = "59";
    player27.position = "投手";
    player27.era = 100;
    player27.battingaverage = 0.0;
    players.push_back(player27);

    Eagles player28;
    player28.name = "石橋良太";
    player28.age = 32;
    player28.number = "60";
    player28.position = "投手";
    player28.era = 18.90;
    player28.battingaverage = 0.0;
    players.push_back(player28);

    Eagles player29;
    player29.name = "西口直人";
    player29.age = 26;
    player29.number = "62";
    player29.position = "投手";
    player29.era = 4.56;
    player29.battingaverage = 0.0;
    players.push_back(player29);

    Eagles player30;
    player30.name = "林優樹";
    player30.age = 21;
    player30.number = "64";
    player30.position = "投手";
    player30.era = 100;
    player30.battingaverage = 0.0;
    players.push_back(player30);

    Eagles player31;
    player31.name = "小峯新陸";
    player31.age = 21;
    player31.number = "68";
    player31.position = "投手";
    player31.era = 100;
    player31.battingaverage = 0.0;
    players.push_back(player31);

    Eagles player32;
    player32.name = "内星龍";
    player32.age = 21;
    player32.number = "69";
    player32.position = "投手";
    player32.era = 2.62;
    player32.battingaverage = 0.0;
    players.push_back(player32);

    Eagles player33;
    player33.name = "吉川雄大";
    player33.age = 26;
    player33.number = "71";
    player33.position = "投手";
    player33.era = 100;
    player33.battingaverage = 0.0;
    players.push_back(player33);

    Eagles player34;
    player34.name = "宮森智志";
    player34.age = 25;
    player34.number = "72";
    player34.position = "投手";
    player34.era = 7.07;
    player34.battingaverage = 0.0;
    players.push_back(player34);

    Eagles player35;
    player35.name = "佐藤智輝";
    player35.age = 23;
    player35.number = "001";
    player35.position = "投手";
    player35.era = 100;
    player35.battingaverage = 0.0;
    players.push_back(player35);

    Eagles player36;
    player36.name = "引地秀一郎";
    player36.age = 23;
    player36.number = "004";
    player36.position = "投手";
    player36.era = 100;
    player36.battingaverage = 0.0;
    players.push_back(player36);

    Eagles player37;
    player37.name = "福森耀馬";
    player37.age = 25;
    player37.number = "007";
    player37.position = "投手";
    player37.era = 100;
    player37.battingaverage = 0.0;
    players.push_back(player37);

    Eagles player38;
    player38.name = "王彦程";
    player38.age = 22;
    player38.number = "017";
    player38.position = "投手";
    player38.era = 100;
    player38.battingaverage = 0.0;
    players.push_back(player38);

    Eagles player39;
    player39.name = "古賀康誠";
    player39.age = 18;
    player39.number = "130";
    player39.position = "投手";
    player39.era = 100;
    player39.battingaverage = 0.0;
    players.push_back(player39);

    Eagles player40;
    player40.name = "清宮虎多朗";
    player40.age = 23;
    player40.number = "135";
    player40.position = "投手";
    player40.era = 100;
    player40.battingaverage = 0.0;
    players.push_back(player40);

    Eagles player41;
    player41.name = "竹下瑛広";
    player41.age = 23;
    player41.number = "155";
    player41.position = "投手";
    player41.era = 100;
    player41.battingaverage = 0.0;
    players.push_back(player41);

    Eagles player42;
    player42.name = "太田光";
    player42.age = 26;
    player42.number = "2";
    player42.position = "捕手";
    player42.era = 100;
    player42.battingaverage = 0.262;
    players.push_back(player42);

    Eagles player43;
    player43.name = "炭谷銀仁朗";
    player43.age = 30;
    player43.number = "26";
    player43.position = "捕手";
    player43.era = 100;
    player43.battingaverage = 0.215;
    players.push_back(player43);

    Eagles player44;
    player44.name = "田中貴也";
    player44.age = 30;
    player44.number = "44";
    player44.position = "捕手";
    player44.era = 100;
    player44.battingaverage = 0.0;
    players.push_back(player44);

    Eagles player45;
    player45.name = "安田悠馬";
    player45.age = 23;
    player45.number = "55";
    player45.position = "捕手";
    player45.era = 100;
    player45.battingaverage = 0.226;
    players.push_back(player45);

    Eagles player46;
    player46.name = "堀内謙伍";
    player46.age = 26;
    player46.number = "65";
    player46.position = "捕手";
    player46.era = 100;
    player46.battingaverage = 0.0;
    players.push_back(player46);

    Eagles player47;
    player47.name = "石原彪";
    player47.age = 24;
    player47.number = "70";
    player47.position = "捕手";
    player47.era = 100;
    player47.battingaverage = 0.0;
    players.push_back(player47);

    Eagles player48;
    player48.name = "水上桂";
    player48.age = 22;
    player48.number = "022";
    player48.position = "捕手";
    player48.era = 100;
    player48.battingaverage = 0.0;
    players.push_back(player48);

    Eagles player49;
    player49.name = "江川侑斗";
    player49.age = 22;
    player49.number = "137";
    player49.position = "捕手";
    player49.era = 100;
    player49.battingaverage = 0.0;
    players.push_back(player49);

    Eagles player50;
    player50.name = "小深田大翔";
    player50.age = 27;
    player50.number = "0";
    player50.position = "内野手";
    player50.era = 100;
    player50.battingaverage = 0.245;
    players.push_back(player50);

    Eagles player51;
    player51.name = "浅村栄斗";
    player51.age = 32;
    player51.number = "3";
    player51.position = "内野手";
    player51.era = 100;
    player51.battingaverage = 0.275;
    players.push_back(player51);

    Eagles player52;
    player52.name = "阿部寿樹";
    player52.age = 33;
    player52.number = "4";
    player52.position = "内野手";
    player52.era = 100;
    player52.battingaverage = 0.182;
    players.push_back(player52);

    Eagles player53;
    player53.name = "茂木栄五郎";
    player53.age = 29;
    player53.number = "5";
    player53.position = "内野手";
    player53.era = 100;
    player53.battingaverage = 0.083;
    players.push_back(player53);

    Eagles player54;
    player54.name = "鈴木大地";
    player54.age = 33;
    player54.number = "7";
    player54.position = "内野手";
    player54.era = 100;
    player54.battingaverage = 0.269;
    players.push_back(player54);

    Eagles player55;
    player55.name = "マイケル・フランコ";
    player55.age = 33;
    player55.number = "23";
    player55.position = "内野手";
    player55.era = 100;
    player55.battingaverage = 0.2;
    players.push_back(player55);

    Eagles player56;
    player56.name = "黒川史陽";
    player56.age = 22;
    player56.number = "24";
    player56.position = "内野手";
    player56.era = 100;
    player56.battingaverage = 0.091;
    players.push_back(player56);

    Eagles player57;
    player57.name = "平竜哉";
    player57.age = 25;
    player57.number = "30";
    player57.position = "内野手";
    player57.era = 100;
    player57.battingaverage = 0.0;
    players.push_back(player57);

    Eagles player58;
    player58.name = "銀次";
    player58.age = 35;
    player58.number = "33";
    player58.position = "内野手";
    player58.era = 100;
    player58.battingaverage = 0.0;
    players.push_back(player58);

    Eagles player59;
    player59.name = "山崎剛";
    player59.age = 27;
    player59.number = "34";
    player59.position = "内野手";
    player59.era = 100;
    player59.battingaverage = 0.214;
    players.push_back(player59);

    Eagles player60;
    player60.name = "伊藤裕季也";
    player60.age = 26;
    player60.number = "39";
    player60.position = "内野手";
    player60.era = 100;
    player60.battingaverage = 0.253;
    players.push_back(player60);

    Eagles player61;
    player61.name = "クリス・ギッテンス";
    player61.age = 29;
    player61.number = "42";
    player61.position = "内野手";
    player61.era = 100;
    player61.battingaverage = 0.0;
    players.push_back(player61);

    Eagles player62;
    player62.name = "渡邊佳明";
    player62.age = 26;
    player62.number = "48";
    player62.position = "内野手";
    player62.era = 100;
    player62.battingaverage = 0.150;
    players.push_back(player62);

    Eagles player63;
    player63.name = "横尾俊建";
    player63.age = 30;
    player63.number = "61";
    player63.position = "内野手";
    player63.era = 100;
    player63.battingaverage = 0.0;
    players.push_back(player63);

    Eagles player64;
    player64.name = "入江大樹";
    player64.age = 21;
    player64.number = "63";
    player64.position = "内野手";
    player64.era = 100;
    player64.battingaverage = 0.0;
    players.push_back(player64);

    Eagles player65;
    player65.name = "村林一樹";
    player65.age = 25;
    player65.number = "66";
    player65.position = "内野手";
    player65.era = 100;
    player65.battingaverage = 0.307;
    players.push_back(player65);

    Eagles player66;
    player66.name = "辰見鴻之介";
    player66.age = 22;
    player66.number = "78";
    player66.position = "内野手";
    player66.era = 100;
    player66.battingaverage = 0.0;
    players.push_back(player66);

    Eagles player67;
    player67.name = "永田颯太郎";
    player67.age = 22;
    player67.number = "131";
    player67.position = "内野手";
    player67.era = 100;
    player67.battingaverage = 0.0;
    players.push_back(player67);

    Eagles player68;
    player68.name = "エスタミー・ウレーニャ";
    player68.age = 24;
    player68.number = "138";
    player68.position = "内野手";
    player68.era = 100;
    player68.battingaverage = 0.0;
    players.push_back(player68);

    Eagles player69;
    player69.name = "澤野聖悠";
    player69.age = 22;
    player69.number = "141";
    player69.position = "内野手";
    player69.era = 100;
    player69.battingaverage = 0.0;
    players.push_back(player69);

    Eagles player70;
    player70.name = "西川遥輝";
    player70.age = 31;
    player70.number = "6";
    player70.position = "外野手";
    player70.era = 100;
    player70.battingaverage = 0.164;
    players.push_back(player70);

    Eagles player71;
    player71.name = "辰己涼介";
    player71.age = 26;
    player71.number = "8";
    player71.position = "外野手";
    player71.era = 100;
    player71.battingaverage = 0.227;
    players.push_back(player71);

    Eagles player72;
    player72.name = "吉野創士";
    player72.age = 19;
    player72.number = "9";
    player72.position = "外野手";
    player72.era = 100;
    player72.battingaverage = 0.0;
    players.push_back(player72);

    Eagles player73;
    player73.name = "田中和基";
    player73.age = 28;
    player73.number = "25";
    player73.position = "外野手";
    player73.era = 100;
    player73.battingaverage = 0.097;
    players.push_back(player73);

    Eagles player74;
    player74.name = "岡島豪郎";
    player74.age = 33;
    player74.number = "27";
    player74.position = "外野手";
    player74.era = 100;
    player74.battingaverage = 0.264;
    players.push_back(player74);

    Eagles player75;
    player75.name = "島内宏明";
    player75.age = 33;
    player75.number = "35";
    player75.position = "外野手";
    player75.era = 100;
    player75.battingaverage = 0.177;
    players.push_back(player75);

    Eagles player76;
    player76.name = "前田銀治";
    player76.age = 19;
    player76.number = "36";
    player76.position = "外野手";
    player76.era = 100;
    player76.battingaverage = 0.0;
    players.push_back(player76);

    Eagles player77;
    player77.name = "武藤敦貴";
    player77.age = 22;
    player77.number = "50";
    player77.position = "外野手";
    player77.era = 100;
    player77.battingaverage = 0.0;
    players.push_back(player77);

    Eagles player78;
    player78.name = "小郷裕哉";
    player78.age = 26;
    player78.number = "51";
    player78.position = "外野手";
    player78.era = 100;
    player78.battingaverage = 0.276;
    players.push_back(player78);

    Eagles player79;
    player79.name = "和田恋";
    player79.age = 27;
    player79.number = "54";
    player79.position = "外野手";
    player79.era = 100;
    player79.battingaverage = 0.200;
    players.push_back(player79);

    Eagles player80;
    player80.name = "正隨優弥";
    player80.age = 27;
    player80.number = "64";
    player80.position = "外野手";
    player80.era = 100;
    player80.battingaverage = 0.000;
    players.push_back(player80);

    Eagles player81;
    player81.name = "柳澤大空";
    player81.age = 20;
    player81.number = "142";
    player81.position = "外野手";
    player81.era = 100;
    player81.battingaverage = 0.0;
    players.push_back(player81);

    Eagles player82;
    player82.name = "大河原翔";
    player82.age = 19;
    player82.number = "144";
    player82.position = "外野手";
    player82.era = 100;
    player82.battingaverage = 0.0;
    players.push_back(player82);

    write(players);

    datafile(players);

    cout << "調べたい背番号を入力して、Enterキーを押してください。\n";

    cout << "調べたいポジションを入力して、Enterキーを押してください(ctrl+zでプログラムの終了）。\n";

    string SearchNumber;
    string SearchPosition;
    while (cin >> SearchNumber >> SearchPosition) {
        Eagles searchplayer = searchnumber(players, SearchNumber);
        if (searchplayer.name != "") {
            cout << "\n背番号 " << "<" << SearchNumber << ">" << " の選手情報\n";
            cout << "名前: " << searchplayer.name << "(" << searchplayer.age << ")" << "\n";
            cout << "ポジション: " << searchplayer.position << "\n";
            if (searchplayer.era != 100) {
                cout << "防御率: " << searchplayer.era << "\n";
            }
            else {
                cout << "防御率: 記録なし\n";
            }
            if (searchplayer.battingaverage != 0.0) {
                cout << "打率: " << searchplayer.battingaverage << "\n";
            }
            else {
                cout << "打率: 記録なし\n";
            }
            cout << "*****************************************************\n";
        }
        else {
            cout << "\n背番号 " << "<" << SearchNumber << ">" << " の選手は見つかりませんでした。\n";
            cout << "*****************************************************\n";
        }

        vector<Eagles> Searchposition = searchposition(players, SearchPosition);
        if (!Searchposition.empty()) {
            cout << "ポジションが" << "\n" << "<" << SearchPosition << ">" << " の選手一覧\n";
            for (const auto& player : Searchposition) {
                cout << "名前: " << player.name << "(" << player.age << ")" << "\n";
                std::cout << "背番号: " << player.number << "\n";
                if (player.era != 100) {
                    cout << "防御率: " << player.era << "\n";
                }
                else {
                    cout << "防御率: 記録なし\n";
                }
                if (player.battingaverage != 0.0) {
                    cout << "打率: " << player.battingaverage << "\n";
                }
                else {
                    cout << "打率: 記録なし\n";
                }
                std::cout << "---------------------------------\n";
            }
        }
        else {
            std::cout << "ポジションが\n" << "<" << SearchPosition << ">" << " の選手は見つかりませんでした。\n";
        }
    }
    return 0;
}
