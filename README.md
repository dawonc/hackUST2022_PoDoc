# Millistep by PoDoc

## Summary of our Solution
“Millistep” is an mobile application that incorporates 3 approaches: Identification, Reminder, and Suggestion to promote the development of healthier habits. In the identification stage, “Millistep” utilizes the users’ health data to rank factors affecting their current sleeping quality and discover patterns that are used to predict their future sleep quality. Based on the prediction, reminders will be sent out to inform their optimal number or duration of factors (such as number of steps, or sleep duration) to maintain a good sleep quality. From this, “Millistep” will suggest a personalized set of challenges to constructively help them establish healthy habits and ultimately improve their lifestyles.

## Our Data
The file contains data collected from mobile phone from 5 different potential users. For each users, the data contains 5 different factors: Daily Usage, Sleep Duration, Steps, Exercise Duration, Week of the Day. These factors are collected to identify correlations with the users' Sleep Quality (SQ).

## Code 1
This model uses the LinearRegression machine learning model, and when there is new input of data, it predicts the estimated Satisfactory level and gives recommendations based on the input data after training and testing the existing data with KFold and feature scaling strategies.

