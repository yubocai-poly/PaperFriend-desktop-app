| Name                 |Team               |      What I did             |  What I will do |
|:----------------------:|:-----------------:|:-------------------------|:------------------|
| Romain Puech         |Frontend (specific)|-Fixed some bugs relative to the Graph<br>-Worked on connecting the different components together to have a functionning interface: (ex: connecting activities with entries, entries with graph etc) <br>-Various visual improvements to the graph: gap when no value for more than 3 consecutive days, points representing the values, scale adapts to the values<br>- Styled the chat to make messages appear like speech bubbles + other visual improvements of the chat|-Restructure teams now that we have a functionning app: define new tasks, features etc<br>-Work with the analysis team|
| Bogdana Kolic        |Frontend (specific)|-Fixed some style related bugs<br>-Made it possible for the user to [modify friends and activities](https://github.com/CSE201-project/PaperFriend-desktop-app/issues/52) related to their entry<br>-Made [laoding existing entries and saving changes](https://github.com/CSE201-project/PaperFriend-desktop-app/issues/89) into files work, and handled keeping all parts of the program up to date when changes have been made<br>||
| Liam Loughman        |Frontend (specific)|Working on implementing a way of displaying habits with images. Came acoss few problems in the dislpay part.|Continue working on the implementation.|
| Yubo Cai             |Frontend (specific)| - Using the `html` format to achieve the saving text display the style in the **OnlyRead** mod <br> -  Integrate all the components of the mainwindow together <br> - Clean the useless function and code in `TextEditor` class <br> - improve the text display function and logic in `CardClass` and Text Title| - Solve the problem of Text overflow problem in `TextEditor` <br> - Fix the problem of title and text are not sperated and recognize on `EntryCard`|
| Luigi Massacci       |Frontend (general) |||
| Safaa Arbai          |Frontend (general) |-Modified the mascot and mascotchat classes to be able to display the mascot and the messages in the chatbox.|-Work on changing some properties in the messages and mascot display (like limit the width of the messages and only display the mascot once when there are a lot of messages at once.|
| Ahmed Benchekroun    |Frontend (general) |-Saved the activities added in a text file such that every line is of type "activity_name , activity_type". <br> -Improved the the style of the user interface and associated the save button with file creation and saving. <br> -Documentation about QFile and Qlineedit and their different functionalities. |-Close activities window only when the save button is clicked so that we are sure that the activities file is created. <br> - Limit the length of an activity's name to 30 characters. <br> -Start working on the people class.|
| Mihaela Gledacheva   |Frontend (general) | - Changed the way a new entry is added <br> - Replaced activity and friend classes with struct | |
| Thomas Turkieh       |File processing    |-Discussed with the project leader and the Data analysis team to clarify the next steps and idea to develop.<br>-Implemented the EntryRecap class in colaboration with the Data analysis team.<br>- Started to implement functions to save vectors of activities and friends for use in the main window.(nearly done)|-Finish the implementation of the discussed functions.<br>- Design a better file arborescence.|
| Junyuan (Frank) Wang |File processing    |- Finish the filter function. <br> - Design and Implement the Entry filter GUI both on display and setting. <br> - Improve multiple Entry filter condition logic. <br> - Add widget tips to each button and input widgets| |
| Octave Gaspard       |Data analysis      |- Organization of the data analysis team.<br>- Worked together with the subteam to decide the implementation in the app of the analysis we are doing. We also worked with Thomas to build the basis of the recurring recap we are going to put most of the analysis in.<br>- Found how to compute the weighted least squares coefficients for quadratic regression.<br>- Implemented functions to solve the necessary 3D linear equations system, added horner scheme for polynomial evaluation.<br>- Debugged and tested the new functions, added some error handling.<br>|- Finish writing the STL decomposition implementation.<br>- Comment, clarify, optimize my code.<br>|
| Brook Nigatu         |Data analysis      |- Implemented a weekly recap function that uses the analysis methods to generate a recap of the user's week in the form of an EntryRecap object. <br>|- Implement monthly and yearly recaps. <br> - Work with the front-end and the rest of the analysis team to decide further improvements on recaps (i.e formatting, additional functionalities etc).|
| Artem Mamichev       |Data analysis      |<br>- Implemented working NLP (text analysis) with python Tensorflow. For now it is in Jupyter Notebook not connected to the project, though it can be tested. <br>- Worked together with the subteam to decide on functionality and structure of RECAPS in the app.| Next week I will work on connecting my code to the project for us to be able to analyze text and understand mood from it, also I will work on translating Python ML code to C++ with TensorFlow C++ API|