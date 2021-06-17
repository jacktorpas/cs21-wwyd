#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "chapters.h"

using namespace std;

void chapterOne(){
    cout << "\nWhile sipping coffee, you gaze out the window. This is simply another day of crime scene investigation for\n";
    cout << "you as a homicide detective of the Los Angeles Police Department.\n\n";
    cout << "The missing persons\' department handed you a case file. It was transferred to you because clues indicate\n";
    cout << "that this may not be a missing person case, but rather a murder case.\n\n";
    cout << "The file is sitting on top of your desk.\n\n";
    cout << "What would you do?\n";
}

void chapterTwo(){
    cout << "\nYou took the case file and began flipping through the pages. You go over the department\'s missing person flyer.\n";
    cout << "\n---------------------------------\n\n";
    cout << "LOS ANGELES POLICE DEPARTMENT\nRobbery-Homicide Division, Crime Analysis Detail\n";
    cout << "---------------------------------\nMISSING PERSON\n\n";
    cout << "The Los Angeles Police Department is seeking information regarding the disappearance of Elisa Lam.\n\n";
    cout << "SUMMARY: Elisa Lam was last seen on January 31, 2013, at the Cecil Hotel at 640 S. Main Street in downtown\n";
    cout << "Los Angeles. Lam was travelling alone from Vancouver, Canada and arrived in Los Angeles, California, on\n";
    cout << "January 26, 2013. Her final destination was Santa Cruz, California. She takes public transportation\n";
    cout << "including Amtrak and buses.\n\n";
    cout << "NAME: Elisa Lam\nDESCRIPTION: Female, Chinese-Canadian, black hair, brown eyes, 5\'4\", 115 lbs\n";
    cout << "DOB: 04/30/91\nLAST KNOWN ADDRESS: Cecil Hotel, 640 S, Main Street in downtown Los Angeles.\n";
    cout << "LANGUAGE SPOKEN: English (Fluent), Cantonese\n\n";
    cout << "Anyone with information about Lam\'s whereabouts is asked to call police at (213) 486-6890 or\n";
    cout << "(877) 527-3247. Anonymous tips can be called in at (800) 222-8477.\n";
    cout << "---------------------------------\n\n";
    cout << "You noticed a Compact Disc (CD) attached to the file.\n\nWhat would you do?\n";
}

void chapterThree(){
    cout << "\nYou put the CD into your laptop and watched the video.\n\n";
    cout << "The video is the final known sighting of Elisa Lam, which was captured by a video surveillance camera in one of the\n";
    cout << "Cecil Hotel's elevators. Lam is alone. In around two and a half minutes of the video, she makes unusual movements\n";
    cout << "and gestures, as if she is talking to someone who is not captured by the camera. She seemed to have pressed\n";
    cout << "all of the elevator's buttons. She seems vigilant and keeps on hiding, as if someone is chasing her.\n\n";
    cout << "You felt shivers run down your spine.\n\nYou entered LAPD\'s website and searched \"Cecil Hotel\".\n\n";
    cout << "In the search engine results, a summary of all cases relating to the hotel appeared.\n\n";
    cout << "What would you do?\n";
}

void chapterFour(){
    cout << "\nSeveral suicides and murders have occurred at the Cecil Hotel in Los Angeles during the course of its history.\n\n";
    cout << "Suicide:\n2 - Gunshot to the head\n3 - Ingested poison\n1 - Slit throat\n\n";
    cout << "Murder:\n1 - Newborn discarded from window\n1 - Stabbed, beaten, and raped\n\n";
    cout << "One that struck you most is the fact that at least two serial murderers, Richard Ramirez and Jack Unterweger, have stayed\n";
    cout << "at the hotel while going on a killing spree (killing 13 and 15 individuals respectively).\n\n";
    cout << "The Cecil Hotel's background is rife with violence and disturbing events. Because of this, it became an infamous\n";
    cout << "center for adulterous couples, drug activities, and a regular meeting place for sex workers. It's a very dangerous place\n";
    cout << "for clueless tourists like Elisa Lam.\n\n";
    cout << "Your heart began to race, and you blamed it on the coffee. The clock is ticking.\n";
    cout << "It's time to investigate the case.\nWhat would you do?\n";
}

void chapterFive(){
    cout << "\nYou studied all of the information gathered before going out into the field to investigate.\n\n";
    cout << "You discovered that Elisa Lam Lam communicated with her parents in British Columbia daily while travelling. When her\n";
    cout << "parents did not hear from her on February 1, 2013, the day she was supposed to check out of the Cecil Hotel and leave for\n";
    cout << "Santa Cruz, they contacted the Los Angeles Police Department (LAPD).\n\n";
    cout << "The information appears to be insufficient. You're debating whether you should call her parents and ask for further details,\n";
    cout << "or whether you should google her name and rummage through her online footprint.\n\nWhat would you do?\n";
}

//STORY 1

void _1ChapterSix(){
    cout << "\nThe phone rang, and the other line answered immediately. (Press ENTER to go through the call).\n"; cin.get();
    cout << "Detective: \"Good morning Mrs. Lam. I'm the LAPD investigator looking into your missing daugher\'s\n";
    cout << "case. Do you mind if I ask you a few more questions?\"\n\n"; cin.get();
    cout << "Mrs. Lam: \"No, not at all. Is there any update? Our flight to Los Angeles is scheduled for tomorrow.\n";
    cout << "Please tell me you've already found her. Is she alright?\"\n\n"; cin.get();
    cout << "Detective: \"Sorry, Mrs. Lam, but we haven't located her yet. I was about to inquire as to why she\n";
    cout << "was traveling alone in Los Angeles. Was she coming here to meet someone?\"\n\n"; cin.get();
    cout << "Mrs. Lam: \"No, no, no... She had planned to go alone for a while now. We were meant to accompany\n";
    cout << "her, but she insisted on going by herself. She... wanted to be independent.\"\n\n"; cin.get();
    cout << "Detective: \"Is there any particular reason as to why you're not permitting her to travel alone? I mean...\n";
    cout << "She's 21 years old, a grown adult.\"\n\n"; cin.get();
    cout << "Mrs. Lam: \"It's not the first time she's gone missing. Detective.. She has bipolar disorder as well as\n";
    cout << "depression. Even though she has no history of suicide ideation, she can't be alone!\"\n\n"; cin.get();
    cout << "Detective: \"Mrs. Lam, we're doing all we can to find your daughter. Could you please provide me with her\n";
    cout << "medical diagnosis and prescription?\"\n\n"; cin.get();
    cout << "A few more assurances later, the phone call ended. You received a file containing Elisa Lam's medical history.\n\n";
    cout << "What would you do?\n";
}

void _1ChapterSeven(){
    cout << "\nYou examined Elisa Lam's medical records.\n\n";
    cout << "---------------------------------------\nCANADA MEDICAL ARTS\n1178 Islington Ave, Toronto, Canada\n\n";
    cout << "---------------------------------------\nPatient\'s Name: Elisa Lam\nAddress: Vancouver, British Columbia, Canada\n\n";
    cout << "Prescription:\n\nObserved Symptoms: Major Depressive Disorder, Bipolar Disorder\n";
    cout << "\tPrescribed drugs:\n\t\tWellbutrin (atypical antidepressant to treat major depressive disorder)\n\t\t";
    cout << "Lamictal (to delay or prevent the recurrence of depressive episodes in bipolar disorder)\n\t\t";
    cout << "Seroquel (atypical antipsychotic medication used for the treatment of bipolar disorder, and major depressive ";
    cout << "disorder)\n\t\tEffexor (an antidepressant medication for major depressive disorder)\n\n";
    cout << "---------------------------------------\n\nShe is taking four medications at the same time. She cannot be left alone.\n";
    cout << "It's time to get up and start looking for Elisa.\n\nWhat would you do?\n";
}

void _1ChapterEight(){
    cout << "\nYou grabbed your keys and went straight to your car.\n\n";
    cout << "Elisa Lam visited the following sites, according to information provided by the missing person\'s department.\n\n";
    cout << "The Last Bookstore - the place where Elisa Lam was last seen visiting outside the hotel.\n";
    cout << "Hotel Cecil - the place where Elisa Lam stayed.\n\n";
    cout << "Because the case is urgent, it is critical to select what is essential in the investigation.\n\nWhat would you do?\n";
}

//the last bookstore story
void _1Chapter9A(){
    cout << "\nIn front of you is a large, cozy-looking bookstore.\n\n";
    cout << "You entered The Last Bookstore and spoke with the manager, Katie Orphan.\n\nShe\'s the last person to talk to Elisa ";
    cout << "before she disappeared.\n\nElisa bought books as a souvenir of her vacation and as gifts for her family. The books were so ";
    cout << "heavy that it took\ntwo people to transport them to the hotel. Katie describes Elisa as \"outgoing, very lively, very\n";
    cout << "friendly\" during their conversation.\n\nYou learned that Elisa was not having any depressive episodes when she went to the ";
    cout << "bookstore.\n\nPress ENTER to continue...\n"; cin.get();
}

//hotel cecil story
void _1Chapter9B(){
    cout << "\nA 14-story Cecil Hotel with 700 rooms is in front of you.\n\n";
    cout << "You walked into the infamous Cecil Hotel. It looks vintage, but grandiose. If you knew nothing about the hotel\'s\n";
    cout << "horrific past, you'd say it looks beautiful.\n\nYou inquired about Elisa Lam's check-in and check-out times at the ";
    cout << "front desk. She was\nscheduled to leave on February 1, the day after she went missing.\n\n";
    cout << "According to the video surveillance, Elisa never left the hotel on January 31.\n\nYou obtained Elisa's room key.\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

//location is "Cecil Hotel" or "The Last Bookstore"
void _1ChapterN(string location){
    cout << "\nYou have already explored " << location << ". There is one more site Elisa Lam visited, according to information\n";
    cout << "provided by the missing persons\' department.\n\n";

    if(location.compare("Cecil Hotel") == 0){
        cout << "The Last Bookstore - the place where Elisa Lam was last seen visiting outside the hotel.\n";
    }else{
        cout << "Hotel Cecil - the place where Elisa Lam stayed.\n";
    }

    cout << "\nBecause the case is urgent, it is critical to select what is essential in the investigation.\n\nWhat would you do?\n";
}

//this follows chapter 9.1.B provided you've already explored the bookstore
void _1Chapter10(){
    cout << "\nThis hotel was built in the 1920s as a business hotel, but it suffered significant financial difficulties during the\n";
    cout << "Great Depression of the 1930s and never managed to recover.\n\n";
    cout << "According to a fellow officer, the hotel accommodates all guests, including those without IDs.\n\n";
    cout << "Each floor of the hotel has a different level of threat. The first story is the safest, and up to the 14th floor contains\n";
    cout << "drug traffickers, criminals, and murderers who have eluded the authorities.\n\n";
    cout << "You examine Elisa's room key. It has the numbers \"5\" and \"317\" inscribed on it.\n\n";
    cout << "You stepped inside the elevator and reached for the buttons. Unfortunately, you were confused as to which button to press\n";
    cout << "for the floor number.\n\nWhat would you do?\n";
}

void _1Chapter11(){
    cout << "\nYou pressed 5 and found yourself in front of Elisa\'s room a few minutes later.\n\n";
    cout << "When you opened the door, there were two female occupants inside. They share this room with Elisa, who serves as a bed spacer.\n";
    cout << "\nYou sighed with relief, knowing that somehow Elisa had someone at her side.\n\n";
    cout << "However, her roommates started to complain about Elisa\'s strange behavior. She was locking the roommates out and demanding\n";
    cout << "verbal passwords, as well as placing notes on their beds, pressing them to leave.\n\n";
    cout << "You saw some of Elisa's belongings on her bed -- her cellphone and her medicine bottles.\n\nWhat would you do?\n";
}

//phone
void _1Chapter12A(){
    cout << "\nYou grabbed the phone, but it needed a 4-digit password. You opened her side table in the hopes of finding a clue.\n\n";
    cout << "You found a book and began flipping through its pages. There was a note.\n\n";
    cout << "----------------------------------------------\n";
    cout << "HAPPY BIRTHDAY, MY DEAR ELISA!\n\n";
    cout << "I can't believe it's April 30 already. The day you said your first words were as if it was yesterday. Time flies so fast.\n";
    cout << "I saw you reading a lot of books with blue cover pages. I stumbled upon this book and thought you might enjoy it.\n\n";
    cout << "-Dad\n----------------------------------------------\n\n";
    cout << "What would you do?\n";
}

void _1Chapter12AA(){
    cout << "\nWhen you entered 0430, the phone unlocked.\n\n";
    cout << "The notes app was already open. You went through all of her journal entries and discovered that she experienced\n";
    cout << "a relapse: a deterioration in someone\'s health following a temporary recovery. Elisa lamented that a relapse at\n";
    cout << "the start of the current academic year had caused her to drop numerous subjects, leaving her\n";
    cout << "\"so utterly directionless and lost.\" She titled her post, \"You're always haunted by the idea you're wasting your life.\"\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

//meds
void _1Chapter12B(){
    cout << "\nYou examined and read the labels on Elisa's medicines.\n\n-----------------------------------\n";
    cout << "Rx 8212345\n\t\t\tLam, Elisa\n\n";
    cout << "Dr. MacDonald, Joe\t\t\tKM Dec 30 2012\n\n30 TAB Wellbutrin 4mg\nBupropion hydrochloride 4mg\n";
    cout << "DIN 02123282 SEV\t\t\tRefills: 3\nTAKE 1/2 TABLET ONCE DAILY\t\t\tAll Refills Expire: 28-Feb-2013\n";
    cout << "-----------------------------------\n\n";
    cout << "All of the prescription labels state that refills must be completed by February 28th.\n";
    cout << "All four bottles, however, are half-empty.\n\n";
    cout << "You confirmed that Elisa Lam might have been mentally unstable on the day of her disappearance. She wasn't taking the\n";
    cout << "proper dosage of her medicine.\nThe clock is ticking, and you have requested a search and rescue mission.\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

void _1Chapter13(){
    cout << "\nYou remembered Lam's odd behavior on the elevator footage. While the search party is still\nlooking for Elisa, ";
    cout << "you went to the elevator to investigate.\n\nLam entered the elevator and pressed every button before acting strangely. When you\n";
    cout << "did the same, the elevator was put on hold for 2 minutes. This explains why, on the CCTV footage, the elevator stayed open.\n\n";
    cout << "Lam exits the elevator numerous times in the footage as if she's checking to see whether she\'s being followed before\n";
    cout << "stepping back in. She also appears to be speaking to someone off-camera, unusually moving her hands before rushing back\n";
    cout << "inside the elevator and hiding in a corner.\n\n";
    cout << "Did she panic because of the elevator, which resulted in her strange behavior? Was she being followed by someone? Was she\n";
    cout << "hallucinating, or did she see some sort of ghost?\n\nYour heart skipped a beat when your phone unexpectedly rang. It was the ";
    cout << "officer in charge\nof the search and rescue operation.\n\nWhat would you do?\n";
}

void _1Chapter14(){
    cout << "\nPolice and canine teams scoured the streets of downtown and the hotel corridors. But they found nothing.\n\n";
    cout << "You were certain Elisa had never left the building the day she went missing. You double-checked the video footage\n";
    cout << "and discovered that she was on the 14th floor at the time.\n\nThe fourteenth floor.\n\n";
    cout << "Before you let your thoughts wander to the possibilities, three people came to see you. You are given a choice as to\n";
    cout << "whom to talk to; a tenant, the janitor, and the hotel manager.\n\nWhat would you do?\n";
}

//tenant
void _1Chapter15A(){
    cout << "\nYou let the tenant enter the room. She said that the water in the hotel was dark and tasted strange.\n\n";
    cout << "You were disappointed as to why the tenant is complaining to you. You delegated the investigation to your\n";
    cout << "officers to put an end to the tenant's concerns.\n\n";
    cout << "However, your displeasure changed to horror when the cops phoned to tell you that they had discovered Elisa Lam's body.\n\n";
    cout << "She's dead.\n\nPress ENTER to continue...\n"; cin.get();
}

//janitor
void _1Chapter15B(){
    cout << "\nYou let the janitor enter the room. He said that a foul smell emanated from the hotel's basement.\n";
    cout << "Your heart began to race.\n\nYou delegated the investigation to your officers, and hoped that your suspicions were incorrect.\n";
    cout << "\nHowever, horror was painted all over your face when the cops called to tell you that they had discovered Elisa Lam's body.\n";
    cout << "\nShe's dead.\n\nPress ENTER to continue...\n"; cin.get();
}

//manager
void _1Chapter15C(){
    cout << "\nYou let the hotel manager enter the room. She insisted on speaking with you in private. So you two\n";
    cout << "walked up to the roof to talk.\n\nShe handed you an envelope.\n\nThere is a bulk of paper bills inside.\n\n";
    cout << "She explained that the hotel now has such a poor image that they are afraid it may close. Therefore, she demands that\n";
    cout << "you end the case.\n\nWill you accept or refuse her offer?\n\nWhat would you do?\n";
}

//tenant cont.
int _1Chapter16A(){
    srand(time(0)); //seed for some randomization later on
    int stateOfTank; //if tank is (1) open or (2) closed
    cout << "\nYou went to the roof and discovered Elisa's body. Naked.\n\n";
    cout << "Her bloated body was floating in one of the four large tanks that supplied the hotel\'s water supply, resulting in\n";
    cout << "low pressure and murky water coming out of the taps.\n\n";
    cout << "These 1000-gallon (3,785 L) tanks provide water to the hotel rooms, a kitchen, and a coffee shop.\n\n";
    int n = rand() % 100 + 1;
    if(n <= 50){
        cout << "The water tank's latch remained open, implying Elisa might have gotten into the tank herself, or another person left\n";
        cout << "her there. You drained the tank and found her clothes in the bottom.\n\n";
        stateOfTank = 1;
    }else{
        cout << "The water tank's latch remained closed, suggesting that Elisa could not have climbed into the tank on her own.\n";
        cout << "You drained the tank and found her clothes in the bottom.\n\n";
        stateOfTank = 2;
    }
    cout << "How exactly did Elisa end up in the water tank? Why was she naked? You should request an autopsy report.\n\nWhat would you do?\n";
    return stateOfTank;
}

//janitor cont.
void _1Chapter16B(){
    cout << "\nYou walked down to the basement and found Elisa's body.\n\nShe was down on her back on the floor. The body is discolored\n";
    cout << "and has a foul odor.\n\nHow did Elisa end up in this situation?\n\n";
    cout << "There was a shadow hiding on the opposite side of the storage room before you could examine her corpse. None of your officers\n";
    cout << "checked that room. You can't decide whether to go to the storage room or examine Elisa's body.\n\nWhat would you do?\n";
}

//manager ending 1
void _1Chapter16C1(){
    cout << "\nYou accepted the offer.\n\nThe hotel manager went away, smirking.\n\n";
    cout << "You made the decision to detain a random homeless person living on Skid Row.\n\n";
    cout << "This is later discovered by the LAPD's chief of police.\n\n";
    cout << "Your badge was confiscated, and you were removed from the force.\n\nCase: Unresolved as a result of Negligence\n";
    cout << "--THE END--\n\n";
}

//manager ending 2
void _1Chapter16C2(){
    cout << "\nYou refused the offer.\n\nThe hotel manager panicked as you put handcuffs on her wrists.\n\n";
    cout << "Later, the manager was charged with bribery.\n\nElisa Lam remains missing. No leads nor body found.\n\n";
    cout << "Case: Unresolved due to lack of evidence\n--THE END--\n\n";
}

//drowned
void _1Chapter17A1A(){
    cout << "\nThe autopsy report arrived at your office a few days later.\n\n-------------------------------\n";
    cout << "MEDICAL REPORT\nDepartment of Coroner\n------------------------------------\n";
    cout << "Date: 2/21/13\nTime: 9:35 am\n\nName: Lam, Elisa\nAge: 21\nGender: Female\n\nDeath was caused by: ASPHYXIA DUE TO DROWNING\n";
    cout << "Other conditions contributing but not related to the immediate cause of death: Bipolar Disorder\n";
    cout << "Manner of Death: SUICIDE\nCase circumstances: DECOMPOSED\n\nExternal examination:\n";
    cout << "Signs of beginning putrefaction are present. The body is swollen. There is cloudiness and softening of the conjunctiva.\n";
    cout << "The blood is beginning to putrefy. The surface of the body is discolored. The cuticle is peeling off, the eyes protruding,\n";
    cout << "and putrid, gases bubbling from nostrils and orbits, the brain liquefied, the internal organs putrid, the abdomen had burst,\n";
    cout << "the stomach was pultaceous, the lungs also completely decomposed.\n";
    cout << "The genitalia are that of an adult female and there is no evidence of injury.\n\nInternal examination:\n";
    cout << "The kidneys weigh: left, 115 grams; right, 113 grams. The kidneys are anatomic in size, shape and location and are without\n";
    cout << "lesions. The lungs weigh: right, 355 grams; left 362 grams. The lungs are unremarkable.\n";
    cout << "Toxicology results found traces of prescription psychiatric drugs, including antidepressant Wellbutrin, mood stabilizer Lamictal,\n";
    cout << "and antipsychotic Seroquel.\nThe structures are within normal limits. Examination of the pelvic area indicates the victim had not\n";
    cout << "given birth and was not pregnant at the time of death. There is evidence of recent sexual activity but no indications that the\n";
    cout << "sexual contact was forcible.\n\nRemarks:\nDecedent originally presented to this office as suicide victim. Circumstances suggest\n";
    cout << "that suicide in this case is highly possible. LAPD detectives were notified of this finding immediately upon conclusion of examination.\n";
    cout << "-------------------------------\n\n";
    cout << "You discovered Elisa had purposely drowned herself. She most likely opened the hatch and walked into the water tank.\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

//accident
void _1Chapter17A1B(){
    cout << "\nThe autopsy report arrived at your office a few days later.\n\n-------------------------------\n";
    cout << "MEDICAL REPORT\nDepartment of Coroner\n------------------------------------\n";
    cout << "Date: 2/21/13\nTime: 9:35 am\n\nName: Lam, Elisa\nAge: 21\nGender: Female\n\nDeath was caused by: ASPHYXIA DUE TO DROWNING\n";
    cout << "Other conditions contributing but not related to the immediate cause of death: Bipolar Disorder\n";
    cout << "Manner of Death: ACCIDENT\nCase circumstances: DECOMPOSED\n\nExternal examination:\n";
    cout << "Signs of beginning putrefaction are present. The body is swollen. There is cloudiness and softening of the conjunctiva.\n";
    cout << "The blood is beginning to putrefy. The surface of the body is discolored. The cuticle is peeling off, the eyes protruding,\n";
    cout << "and putrid, gases bubbling from nostrils and orbits, the brain liquefied, the internal organs putrid, the abdomen had burst,\n";
    cout << "the stomach was pultaceous, the lungs also completely decomposed.\n";
    cout << "The genitalia are that of an adult female and there is no evidence of injury.\nAnkle ligaments have been torn.\n\n";
    cout << "Internal examination:\nThe kidneys weigh: left, 115 grams; right, 113 grams. The kidneys are anatomic in size, shape and location\n";
    cout << "and are without lesions. The lungs weigh: right, 355 grams; left 362 grams. The lungs are unremarkable.\n";
    cout << "Toxicology results found traces of prescription psychiatric drugs, including antidepressant Wellbutrin, mood stabilizer Lamictal,\n";
    cout << "and antipsychotic Seroquel.\nThe structures are within normal limits. Examination of the pelvic area indicates the victim had not\n";
    cout << "given birth and was not pregnant at the time of death. There is evidence of recent sexual activity but no indications that the\n";
    cout << "sexual contact was forcible.\n\nRemarks:\nDecedent originally presented to this office as suicide victim. Unharmed body with a\n";
    cout << "sprained ankle suggests that accidental drowning in this case is highly possible. LAPD detectives were notified of this finding\n";
    cout << "immediately upon conclusion of examination.\n-------------------------------\n\n";
    cout << "You learned that Elisa most likely unlocked the hatch and accidentally fell into the water tank, drowning herself.\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

//homicide
void _1Chapter17A2A(){
    cout << "\nThe autopsy report arrived at your office a few days later.\n\n-------------------------------\n";
    cout << "MEDICAL REPORT\nDepartment of Coroner\n------------------------------------\n";
    cout << "Date: 2/21/13\nTime: 9:35 am\n\nName: Lam, Elisa\nAge: 21\nGender: Female\n\n";
    cout << "Death was caused by: ASPHYXIA DUE TO LIGATURE STRANGULATION\n";
    cout << "Other conditions contributing but not related to the immediate cause of death: Bipolar Disorder\n";
    cout << "Manner of Death: HOMICIDE\nCase circumstances: DECOMPOSED\n\nExternal examination:\n";
    cout << "A ligature mark is seen on the neck below the mandible. Ligature is approximately 1.5 inches wide and encircles the neck in\n";
    cout << "the form of a \"V\" on the anterior of the neck and an inverted \"V\" on the posterior of the neck. Minor abrasions are present\n";
    cout << "in the area of ligature. Lack of hemorrhage surrounding ligature indicates this injury to be post-mortem.\n";
    cout << "The genitalia are that of an adult female and there is no evidence of injury.\n\nInternal examination:\n";
    cout << "Subsequent autopsy shows a broken hyoid bone. Hemorrhaging from ligature penetrates the skin and subdermal tissues of the neck.\n";
    cout << "Toxicology results found traces of prescription psychiatric drugs, including antidepressant Wellbutrin, mood stabilizer Lamictal,\n";
    cout << "and antipsychotic Seroquel.\nThe structures are within normal limits. Examination of the pelvic area indicates the victim had not\n";
    cout << "given birth and was not pregnant at the time of death. There is evidence of recent sexual activity but no indications that the\n";
    cout << "sexual contact was forcible.\n\nRemarks:\nDecedent originally presented to this office as suicide victim. Presence of the\n";
    cout << "post-mortem ligature mark suggests that suicide in this case is highly improbable. LAPD detectives were notified of this finding\n";
    cout << "immediately upon conclusion of examination.\n-------------------------------\n\n";
    cout << "You discovered Elisa had been strangled to death. You reasoned that it made sense because the water tank's hatch was closed.\n";
    cout << "She was nude, but she had not been sexually abused.\n\nPress ENTER to continue...\n"; cin.get();
}

//paranormal activity
void _1Chapter17A2B(){
    cout << "\nThe autopsy report arrived at your office a few days later.\n\n-------------------------------\n";
    cout << "MEDICAL REPORT\nDepartment of Coroner\n------------------------------------\n";
    cout << "Date: 2/21/13\nTime: 9:35 am\n\nName: Lam, Elisa\nAge: 21\nGender: Female\n\nDeath was caused by: UNKNOWN\n";
    cout << "Other conditions contributing but not related to the immediate cause of death: Bipolar Disorder\n";
    cout << "Manner of Death: COULD NOT BE DETERMINED\nCase circumstances: DECOMPOSED\n\nExternal examination:\n";
    cout << "Signs of beginning putrefaction are present. The body is swollen. There is cloudiness and softening of the conjunctiva.\n";
    cout << "The blood is beginning to putrefy. The surface of the body is discolored. The cuticle is peeling off, the eyes protruding,\n";
    cout << "and putrid, gases bubbling from nostrils and orbits, the brain liquefied, the internal organs putrid, the abdomen had burst,\n";
    cout << "the stomach was pultaceous, the lungs also completely decomposed.\n";
    cout << "The genitalia are that of an adult female and there is no evidence of injury.\nAnkle ligaments have been torn.\n\n";
    cout << "Internal examination:\nThe kidneys weigh: left, 115 grams; right, 113 grams. The kidneys are anatomic in size, shape and location\n";
    cout << "and are without lesions. The lungs weigh: right, 355 grams; left 362 grams. The lungs are unremarkable.\n";
    cout << "Toxicology results found traces of prescription psychiatric drugs, including antidepressant Wellbutrin, mood stabilizer Lamictal,\n";
    cout << "and antipsychotic Seroquel.\nThe structures are within normal limits. Examination of the pelvic area indicates the victim had not\n";
    cout << "given birth and was not pregnant at the time of death. There is evidence of recent sexual activity but no indications that the\n";
    cout << "sexual contact was forcible.\n\nRemarks:\nDecedent originally presented to this office as suicide victim. The way of death is\n";
    cout << "unknown since there are no visible traces of violence or struggle on the corpse. LAPD detectives were notified of this finding\n";
    cout << "immediately upon conclusion of examination.\n-------------------------------\n\n";
    cout << "You were confused when you discovered Elisa had not been harmed in any way. The hatch to the water tank is closed, she is naked,\n";
    cout << "and no traces of struggle can be found.\n\nWhat happened to her and how did she die?\n\nWas she hallucinating, or was this a ";
    cout << "paranormal incident?\n\nPress ENTER to continue...\n"; cin.get();
}

//hide & seek
void _1Chapter17B(){
    cout << "\n\"Freeze! LAPD!\"\n\n";
    cout << "You heard a shuffling noise; if this guy is innocent, he might not have rushed into the alley. As you observed him flee away from\n";
    cout << "you, the backdoor of the storage door remained open.\n\nYour officers asked you if they should chase him or to continue examining ";
    cout << "Elisa's body.\n\nWhat would you do?\n";
}

void _1Chapter18A1(){
    cout << "\nElisa Lam had been diagnosed with depression and bipolar disorder, which causes unexpected fluctuations in mood, energy,\n";
    cout << "activity levels, and the capacity to carry out everyday tasks.\n\n";
    cout << "Elisa had a blog where she shared her experiences with the illness. One of the posts says, \"Depression sucks. I have no control\n";
    cout << "over my emotions. I will be angry for two minutes and sad again. I will be happy for half an hour and then emotional again.\n";
    cout << "So far all I've done is lay on my bed and watch episodes of Chopped. I'm just waiting for it to pass.\"\n\n";
    cout << "Elisa was behaving strangely in the days preceding her death.\n\nHer behavior towards her roommates and in the elevator shows ";
    cout << "how her mental health is affecting her.\nPsychiatrists theorized that maybe Elisa went inside the water tank to shut the world ";
    cout << "around her.\n\nShe longed for peace and silence, which eventually ended her life.\n\n";
    cout << "Dial a helpline, crisis line, or suicide hotline if you are in a tough emotional situation and need to speak with a\n";
    cout << "qualified therapist. You are not alone.\n\n";
    dialNums();
}

void _1Chapter18A2(){
    cout << "\n\nElisa Lam had been diagnosed with depression and bipolar disorder, which causes unexpected fluctuations in mood, energy,\n";
    cout << "activity levels, and the capacity to carry out everyday tasks.\n\n";
    cout << "Elisa had a blog where she shared her experiences with the illness. One of the posts says, \"Depression sucks. I have no control\n";
    cout << "over my emotions. I will be angry for two minutes and sad again. I will be happy for half an hour and then emotional again.\n";
    cout << "So far all I've done is lay on my bed and watch episodes of Chopped. I'm just waiting for it to pass.\"\n\n";
    cout << "Elisa was behaving strangely in the days preceding her death.\nHer behavior towards her roommates and in the elevator shows ";
    cout << "how her mental health is affecting her.\n\nSomeone took advantage of her vulnerability, which has led to her death.\n\n";
    cout << "If you know someone suffering from depression, don't make them feel like they are alone. Listen to them.\n";
    cout << "Help them find the support they need.\n\n";
    dialNums();
}

void dialNums(){
    cout << "Hopeline is a 24/7 suicide prevention and crisis support helpline in the Philippines.\n";
    cout << "PLDT: (02) 804-4673\tGlobe: (0917) 558-4673\n\n";
    cout << "In Touch Community Services offers 24/7 free and confidential support to people in the Philippines.\n";
    cout << "Tel: 8937603; 09178001123; 09228938944\n\n";
    cout << "Tawag Paglaum - Centro Bisaya offers 24-hour telephone service for people in Cebu who are with suicide and emotional crisis.\n";
    cout << "Tel: (0939) 937-5433;  (0927) 654-1629\n\n";
    cout << "The National Center for Mental Health Crisis Hotline offers 24-hour service to people in the Philippines who are depressed\n";
    cout << "or at risk of suicide.\nTel: (02) 989-8727; (0917) 899-8727\n\n";
}

//murderer escaped
void _1Chapter18B1A(){
    cout << "\nYou decided not to spend any more time and to continue studying Elisa's corpse.\n\n";
    cout << "The forensics analysis revealed a consistent fingerprint from the time of her death to the day\n";
    cout << "you discovered her body. Her killer apparently returned to retrieve her corpse and properly dispose of it.\n\n";
    cout << "Case: Resolved; Murderer Escaped\n--THE END--\n\n";
}

//murder ending 2
void _1Chapter18B1B(){
    cout << "\nYou and your team pursued him.\n\nThe hotel basement is a labyrinth. You should arrest this individual right away,\n";
    cout << "giving him no opportunity to flee.\n\nYou dashed down the hall when you noticed him about to open the basement door. He can\n";
    cout << "always blend into the crowd once he steps outside.\n\nYou can't let that happen.\n\nWithout thinking, you pulled out your gun and shot him.\n";
    cout << "\nHe immediately collapsed to the ground.\n\nA week later, the chief of police called you to his office.\n\n";
    cout << "You killed Elisa's murderer even though he was empty-handed.\n\nYour badge was seized, and you were dismissed from the force.\n";
    cout << "\nCase: Resolved; detective got dismissed due to negligence\n--THE END--\n\n";
}

//murder ending 3
void _1Chapter18B2A(){
    cout << "\nYou and your team pursued him.\n\nThe hotel basement is a labyrinth. You should arrest this individual right away,\n";
    cout << "giving him no opportunity to flee.\n\nYou dashed down the hall when you noticed him about to open the basement door. He can\n";
    cout << "always blend into the crowd once he steps outside.\n\nYou chase after him.\n\nThe murderer caught you off guard as you turned ";
    cout << "to the door.\nHe was waiting outside the door until he shot you in the chest.\n\n";
    cout << "You instantly fell to the ground. Blood gushes from your chest as your life flashes before your eyes.\n\n";
    cout << "Case: Resolved; detective got killed due to negligence\n--THE END--\n\n";
}

//murder ending 4
void _1Chapter18B2B(){
    cout << "\nYou and your team pursued him.\n\nThe hotel basement is a labyrinth. You should arrest this individual right away,\n";
    cout << "giving him no opportunity to flee.\n\nYou dashed down the hall when you noticed him about to open the basement door. He can\n";
    cout << "always blend into the crowd once he steps outside.\n\nYou can't let that happen, so you chase after him.\n\n";
    cout << "The guy panicked as you put handcuffs on his wrists.\n\nOne week later, forensics revealed that the fingerprints on Elisa's\n";
    cout << "body matched the person you captured.\n\nCase: Resolved; murderer was arrested\n--THE END--\n\n";
}

//STORY 2

void _2ChapterSix(){
    cout << "\nYou used the Google search engine to look for Elisa's name.\n\n";
    cout << "You discovered Elisa's blog, Ether Fields, on Blogspot. This was her diary, where she posted random images and tales of her life,\n";
    cout << "notably her battle with depression.\n\nIn a January 2012 blog entry, Lam expressed that relapse at the start of the\n";
    cout << "current school year had caused her to abandon numerous classes, leaving her feeling \"utterly directionless and lost.\"\n";
    cout << "\nShe also chronicled her trip to Los Angeles. After posting about her wish to create new connections and meet new people,\n";
    cout << "she went to several tourist destinations.\n\nYou looked at the time and saw that it was 9 a.m already. The clock is ticking, it's time\n";
    cout << "to start looking for Elisa.\n\nWhat would you do?\n";
}

void _2ChapterSeven(){
    cout << "\nYou grabbed your keys and went straight to your car.\n\n";
    cout << "Elisa Lam visited the following sites, according to information provided by the missing person\'s department.\n\n";
    cout << "Hotel Cecil - The place where Elisa Lam stayed.\n";
    cout << "Skid Row - Right next to the hotel; branded as one of the most dangerous streets in LA.\n\n";
    cout << "Because the case is urgent, it is critical to select what is essential in the investigation.\n\nWhat would you do?\n";
}

//_2Chapter8A == _1Chapter9B

void _2Chapter8B(){
    cout << "\nSkid Row is one of the biggest permanent communities of homeless persons in the United States (about 4,200 - 8,000) and has been\n";
    cout << "recognized for its concentrated homeless population since the 1930s. It is one of the most prominent neighborhoods in Los Angeles\n";
    cout << "due to its lengthy history of police raids, targeted city initiatives, and homelessness activism.\n\n";
    cout << "Within the LAPD Central Area, which includes Skid Row and other areas in Downtown Los Angeles, crimes in Skid Row constituted 58.96%.\n";
    cout << "In 2005, auto thefts, aggravated assaults, and robberies made up 59" << "%" << " of crimes in Skid Row.\n\n";
    cout << "This is a very unsafe area for innocent tourists like Elisa Lam to explore.\n\nPress ENTER to continue...\n"; cin.get();
}

//location is "Cecil Hotel" or "Skid Row"
void _2ChapterN(string location){
    cout << "\nYou have already explored " << location << ". There is one more site Elisa Lam visited, according to information\n";
    cout << "provided by the missing persons\' department.\n\n";

    if(location.compare("Cecil Hotel") == 0){
        cout << "Skid Row - Right next to the hotel; branded as one of the most dangerous streets in LA.\n\n";
    }else{
        cout << "Hotel Cecil - the place where Elisa Lam stayed.\n";
    }

    cout << "\nBecause the case is urgent, it is critical to select what is essential in the investigation.\n\nWhat would you do?\n";
}

//_2ChapterNine == _1Chapter10

void _2Chapter10(){
    cout << "\nYou pressed 5 and found yourself in front of Elisa\'s room a few minutes later.\n\n";
    cout << "When you opened the door, there were two female occupants inside. They share this room with Elisa, who serves as a bed spacer.\n";
    cout << "\nYou sighed with relief, knowing that somehow Elisa had someone at her side.\n\n";
    cout << "However, her roommates started to complain about Elisa\'s strange behavior. She was locking the roommates out and demanding\n";
    cout << "verbal passwords, as well as placing notes on their beds, pressing them to leave.\n\n";
    cout << "You saw some of Elisa's belongings on her bed -- her cellphone and a business card.\n\nWhat would you do?\n";
}

//_2Chapter11A == _1Chapter12A

void _2Chapter11AA(){
    cout << "\nWhen you entered 0430, the phone unlocked.\n\n";
    cout << "You launched the texting app. You read Elisa's conversation with a person named David. David expressed how\n";
    cout << "unforgettable their encounter on the bus had been and how they should see each other again.\n\n";
    cout << "Elisa, on the other hand, never replied to the 13 messages he sent.\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

void _2Chapter11B(){
    cout << "\nYou examined and read the business card.\n\n--------------------------------\n";
    cout << "DAVID MICHAELS\nRegional Sales Manager\t\tEcovital Co.\n(853) 482-1772\ndavid.michaels@ecovital.com\n";
    cout << "3993 Red Maple Drive, Los Angeles, California\n--------------------------------\n\n";
    cout << "It is reasonably common for people to have a number of business cards lying around. If this specific David had anything\n";
    cout << "to do with Elisa's disappearance, at least you know how and where to find him.\n\n";
    cout << "The clock is ticking, and you have requested a search and rescue mission.\n\n";
    cout << "Press ENTER to continue...\n"; cin.get();
}

