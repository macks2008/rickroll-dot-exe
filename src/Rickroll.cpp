#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;
void rickrollTheConsole(){
	vector<string> lyrics = {"We're no strangers to loooove...", "You know the rules, and so do I...", 
	"A full commitment's what I'm, thinking ooooof", "You wouldn't get this from any other guy",
	"Iiiiii just wanna tell you how I'm feeling", "Gotta make you, understand",
	"Never gonna give you uup!",
	"Never gonna let you doown!",
	"Never gonna run aroouund, and desert you!",
	"Never gonna make you cryy!",
	"Never gonna say goodbyye!",
	"Never gonna tell a liiie, and hurt you!",
	"We've known each other for so looooong",
	"Your heart's been aching but",
	"You're too shy to say it (say it)",
	"Inside we both know what's been going oooon",
	"We know the game and we're gonna plaay iit",
	"Aaaaand if you ask me how I'm feeling",
	"Don't tell me you're too blind to see",
	"Never gonna give you uup!",
	"Never gonna let you doown!",
	"Never gonna run aroouund, and desert you!",
	"Never gonna make you cryy!",
	"Never gonna say goodbyye!",
	"Never gonna tell a liiie, and hurt you!",
	"Never gonna give you uup!",
	"Never gonna let you doown!",
	"Never gonna run aroouund, and desert you!",
	"Never gonna make you cryy!",
	"Never gonna say goodbyye!",
	"Never gonna tell a liiie, and hurt you!",
	"(ooooooo, give you up!)",
	"(oooooooh) Never gonna give, never gonna give!",
	"(ooooooo, give you up!)",
	"(oooooooh) Never gonna give, never gonna give!",
	"We've know each other for so long",
	"Your heart's been aching but",
	"You're too shy to say it (say it)",
	"Inside we both know what's been going on",
	"We know the game and we're gonna play it",
	"I just wanna tell you how I'm feeling",
	"Gotta make you understand",
	"Never gonna give you uup!",
	"Never gonna let you doown!",
	"Never gonna run aroouund, and desert you!",
	"Never gonna make you cryy!",
	"Never gonna say goodbyye!",
	"Never gonna tell a liiie, and hurt you!",
	"Never gonna give you uup!",
	"Never gonna let you doown!",
	"Never gonna run aroouund, and desert you!",
	"Never gonna make you cryy!",
	"Never gonna say goodbyye!",
	"Never gonna tell a liiie, and hurt you!",
	"Never gonna give you uup!",
	"Never gonna let you doown!",
	"Never gonna run aroouund, and desert you!",
	"Never gonna make you cryy!",
	"Never gonna say goodbyye!",
	"Never gonna tell a liiie, and hurt you!"	
	};
	for(int i= 0; i <lyrics.size(); ++i){
		cout << lyrics.at(i) << endl;
		this_thread::sleep_for (chrono::seconds(3));
	}
	cout << "Thanks for listening to the whole thing. You must be a true memer ;-)" << endl;
	cout << "This Rickroll was brought to you by Twisted_Code#8986." << endl;
	cout << "It is distributed under an MIT license. Source code available at https://github.com/macks2008/rickroll-dot-exe" << endl;
	cout << "(that said, while not required by the license and in part due to simplicity, credit would be appreciated)" << endl;
}
int main(int argc, char* argv[]){
	rickrollTheConsole();
}
