read -p "Enter Problem ID: " problemID
read -p "What is your language: " languageType
touch $problemID.$languageType
code $problemID.$languageType 
