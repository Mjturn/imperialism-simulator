#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void simulate(char** countries, int countries_length) {
    int paired[countries_length];

    for(int i = 0; i < countries_length; i++) {
        paired[i] = 0;
    }
    
    srand(time(NULL));
    
    for(int i = 0; i < countries_length; i++) {
        if(paired[i] == 0) {
            int j;
            
            do {
                j = rand() % countries_length;
            } while (j == i || paired[j] == 1);

            int winner_index = rand() % 2;

            if(winner_index == 0) {
                printf("%s(W) vs. %s(L)\n", countries[i], countries[j]);
            } else {
                printf("%s(L) vs. %s(W)\n", countries[i], countries[j]);
            }

            paired[i] = 1;
            paired[j] = 1;
        }
    }
}

int main() {
    char* countries[] = {
        "Afghanistan",
        "Albania",
        "Algeria",
        "Andorra",
        "Angola",
        "Antigua and Barbuda",
        "Argentina",
        "Armenia",
        "Australia",
        "Austria",
        "Azerbaijan",

        "The Bahamas",
        "Bahrain",
        "Bangladesh",
        "Barbados",
        "Belarus",
        "Belgium",
        "Belize",
        "Benin",
        "Bhutan",
        "Bolivia",
        "Bosnia and Herzegovina",
        "Botswana",
        "Brazil",
        "Brunei",
        "Bulgaria",
        "Burkina Faso",
        "Burundi",

        "Cabo Verde",
        "Cambodia",
        "Cameroon",
        "Canada",
        "Central African Republic",
        "Chad",
        "Chile",
        "China",
        "Colombia",
        "Comoros",
        "Costa Rica",
        "Côte d’Ivoire",
        "Croatia",
        "Cuba",
        "Cyprus",
        "Czech Republic",

        "Democratic Republic of the Congo",
        "Denmark",
        "Djibouti",
        "Dominica",
        "Dominican Republic",

        "East Timor",
        "Ecuador",
        "Egypt",
        "El Salvador",
        "Equatorial Guinea",
        "Eritrea",
        "Estonia",
        "Eswatini",
        "Ethiopia",

        "Fiji",
        "Finland",
        "France",

        "Gabon",
        "The Gambia",
        "Georgia",
        "Germany",
        "Ghana",
        "Greece",
        "Grenada",
        "Guatemala",
        "Guinea",
        "Guinea-Bissau",
        "Guyana",

        "Haiti",
        "Honduras",
        "Hungary",

        "Iceland",
        "India",
        "Indonesia",
        "Iran",
        "Iraq",
        "Ireland",
        "Israel",
        "Italy",

        "Jamaica",
        "Japan",
        "Jordan",

        "Kazakhstan",
        "Kenya",
        "Kiribati",
        "Kosovo",
        "Kuwait",
        "Kyrgyzstan",
        
        "Laos",
        "Latvia",
        "Lebanon",
        "Lesotho",
        "Liberia",
        "Libya",
        "Liechtenstein",
        "Lithuania",
        "Luxembourg",

        "Madagascar",
        "Malawi",
        "Malaysia",
        "Maldives",
        "Mali",
        "Malta",
        "Marshall Islands",
        "Mauritania",
        "Mauritius",
        "Mexico",
        "Micronesia",
        "Moldova",
        "Monaco",
        "Mongolia",
        "Montenegro",
        "Morocco",
        "Mozambique",
        "Myanmar",

        "Namibia",
        "Nauru",
        "Nepal",
        "Netherlands",
        "New Zealand",
        "Nicaragua",
        "Niger",
        "Nigeria",
        "North Korea",
        "North Macedonia",
        "Norway",

        "Oman",

        "Pakistan",
        "Palau",
        "Panama",
        "Papua New Guinea",
        "Paraguay",
        "Peru",
        "Philippines",
        "Poland",
        "Portugal",

        "Qatar",

        "Republic of the Congo",
        "Romania",
        "Russia",
        "Rwanda",

        "Saint Kitts and Nevis",
        "Saint Lucia",
        "Saint Vincent and the Grenadines",
        "Samoa",
        "San Marino",
        "Sao Tome and Principe",
        "Saudi Arabia",
        "Senegal",
        "Serbia",
        "Seychelles",
        "Sierra Leone",
        "Singapore",
        "Slovakia",
        "Slovenia",
        "Solomon Islands",
        "Somalia",
        "South Africa",
        "South Korea",
        "South Sudan",
        "Spain",
        "Sri Lanka",
        "Sudan",
        "Suriname",
        "Sweden",
        "Switzerland",
        "Syria",

        "Taiwan",
        "Tajikistan",
        "Tanzania",
        "Thailand",
        "Togo",
        "Tonga",
        "Trinidad and Tobago",
        "Tunisia",
        "Turkey",
        "Turkmenistan",
        "Tuvalu",

        "Uganda",
        "Ukraine",
        "United Arab Emirates",
        "United Kingdom",
        "United States",
        "Uruguay",
        "Uzbekistan",

        "Vanuatu",
        "Vatican City",
        "Venezuela",
        "Vietnam",

        "Yemen",

        "Zambia",
        "Zimbabwe"
    };

    printf("Welcome to Imperialism Simulator!\n");
    while(1) {
        printf("What would you like to do? Type \"quit\" to quit.\n");
        printf("1. Simulate\n");
        char choice[5];
        scanf("%s", choice);

        if(strcmp(choice, "1") == 0) {
            int countries_length = sizeof(countries) / sizeof(countries[0]);
            simulate(countries, countries_length);
        } else if(strcasecmp(choice, "quit") == 0) {
            break;
        } else {
            printf("Sorry, what you've entered is invalid. Please try again.\n");
        }
    }

    return 0;
}
