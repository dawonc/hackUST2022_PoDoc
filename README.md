# Millistep by PoDoc

## Summary of our Solution
“Millistep” is an mobile application that incorporates 3 approaches: Identification, Reminder, and Suggestion to promote the development of healthier habits. In the identification stage, “Millistep” utilizes the users’ health data to rank factors affecting their current sleeping quality and discover patterns that are used to predict their future sleep quality. Based on the prediction, reminders will be sent out to inform their optimal number or duration of factors (such as number of steps, or sleep duration) to maintain a good sleep quality. From this, “Millistep” will suggest a personalized set of challenges to constructively help them establish healthy habits and ultimately improve their lifestyles.

## Our Data
The file contains data collected from mobile phone from 5 different potential users. For each users, the data contains 5 different factors: Daily Usage, Sleep Duration, Steps, Exercise Duration, Week of the Day. These factors are collected to identify correlations with the users' Sleep Quality (SQ).

## Code 1
This model uses the LinearRegression machine learning model, and when there is new input of data, it predicts the estimated Satisfactory level and gives recommendations based on the input data after training and testing the existing data with KFold and feature scaling strategies

## PoDoc_singleFactor.ipynb
This program computes the correlation factor between a single category of health data to the sleep quality of user. This factor varies from 0 to 1, where closer to 1 meaning higher contribution to good sleep qualtiy. Using the ‘seaborn’ python library, we visualized the degree of correlation. 

## PoDoc_doubleFactor.ipynb
This program computes the collaborative effects of two different types of health data on the user's sleep quality. 
1. The average of total elements of a particualr health data set is calculated. 
2. If a single element value is greater or equal than the average value, it is labelled as 'High' or '1'.
3. If a single element value is smaller than than average value, it is labelled as 'Low' or '0'.
4. After labelling two different data sets, the relationship of two different data type elements of same date is categorized into one of the followings:
HH (11) -> 1
HL (10) -> 2
LH (01) -> 3
LL (00)-> 4
This labels are saved into the 'corr_dataset'.
5. Than, the average value of elements in 'corr_dataset' that has 4 or 5 SQ is calculated. 

## PoDoc_imageToText.ipynb
This program extracts text from an image file to validate the completion of a challenge. 
1. Necessary python libraries and API are installed. 
2. Each image is processed with three different language settings: English (en), Simplified Chinese (ch_sim), and Traditional Chinese (ch_tra). 
3. Extracted text from each language setings are saved to three different lists. 
4. At the end, 
