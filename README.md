# Millistep by PoDoc

## Summary of our Solution
“Millistep” is a mobile application that incorporates 3 approaches: Identification, Reminder, and Suggestion to promote the development of healthier habits. In the identification stage, “Millistep” utilizes the users’ health data to rank factors affecting their current sleeping quality and discover patterns that are used to predict their future sleep quality. Based on the prediction, reminders will be sent out to inform their optimal number or duration of factors (such as the number of steps, or sleep duration) to maintain a good sleep quality. From this, “Millistep” will suggest a personalized set of challenges to constructively help them establish healthy habits and ultimately improve their lifestyles.

## Our Data
The file contains data collected from mobile phones from 5 different potential users. For each user, the data contains 5 different factors: Daily Usage, Sleep Duration, Steps, Exercise Duration, Week of the Day. These factors are collected to identify correlations with the users' Sleep Quality (SQ).

## PoDoc_prediction.ipynb
This model uses the LinearRegression machine learning model to analyze users’ data, and predict their satisfactory level of sleep quality (SQ) based on the accumulated data of the user. In order to increase the train and test sets, we used KFold to get numerous outputs of predicted sleeping quality as well as the prediction error and calculated their average to increase the accuracy of the model. Also, we have applied feature scaling since the number of data varies according to the types of factors from number of steps to seconds of duration of sleep.

When new inputs of current factor data is made, such as exercise duration, sleep duration, phone usage duration, number of steps and the day of the week at the moment, it predicts the SQ with prediction of the factor data input. For example, if a user has 5 hours of sleep left since he/she has been playing video games and our model predicts his/her SQ to be lower than 3 which is the minimum satisfactory level, the model will remind the user his/her predicted SQ at the moment based on the accumulated data and recommend him/her to sleep. Also, it will suggest challenges to help the user to avoid the problem next time. 

Also, based on the average prediction error, our system is able to tell which of the factors have the best effects to the users SQ, thereby giving personalized solutions. 


## PoDoc_singleFactor.ipynb
This program computes the correlation factor between a single category of health data to the sleep quality of users. This factor varies from 0 to 1, where a figure closer to 1 means a higher contribution to good sleep quality. Using the ‘seaborn’ python library, we visualized the degree of correlation. 

## PoDoc_doubleFactor.ipynb
This program computes the collaborative effects of two different types of health data on the user's sleep quality. 
1. The average of total elements of a particular health data set is calculated. 
2. If a single element value is greater or equal to the average value, it is labeled as 'High' or '1'.
3. If a single element value is smaller than the average value, it is labeled as 'Low' or '0'.
4. After labeling two different data sets, the relationship of two different data type elements of the same date is categorized into one of the followings:
HH (11) -> 1
HL (10) -> 2
LH (01) -> 3
LL (00)-> 4
This labels are saved into the 'corr_dataset'.
5. Then, the average value of elements in 'corr_dataset' that has 4 or 5 SQ is calculated. 

## PoDoc_imageToText.ipynb
This program extracts text from an image file to validate the completion of a challenge. 
1. Necessary python libraries and API are installed. 
2. Each image is processed with three different language settings: English (en), Simplified Chinese (ch_sim), and Traditional Chinese (ch_tra). 
3. Extracted text from each language setting is saved to three different lists. 
4. At the end, the extracted text with the highest accuracy is saved in the final result list. 
