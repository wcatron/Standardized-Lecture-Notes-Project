Standardized Lecture Notes Project (SLN Project)
==================================

A look into the power technology can have to bring together scholars from many disciplines to help each other discover new knowledge.

## Objectives
1. Compile a list of git repositories which contain class notes written in standard mark up languages.
2. Establish a list of suitable mark up languages.
3. Develop an algorithm that sifts through the repositories and relates subjects to eachother.

#### Examples of relationships: "Word Plato"
Citation | Line Value
---------|-----------
**PHY/2014/Intro/Plato/203** | *Socrates was portrayed in the writings of Plato as a person who questioned others.*
**CLS/2008/Athens/Plato/159** | *Plato captured a lot of culture in the writing he did.*

## Heiarchy of Data
- Line
- Subtopic
- Topic
- Supertopic
- File
- as of Commit
- Class - school-department-course-section
- Year
- Subject

#### Format of Note Repos
**\*.md** file which contains all the notes for the class in markdown or any other approved mark up language. Users have the flexability to organize thier notes the way they see fit. All text files within the directory will be taken as notes unless specificaly ignored in the .slnignore file. <br/>
**images/** folder which contains any images linked to from the notes file. <br/>
**.sln** file containing the data subject, year, class and other information related to the class and notes such as professor, course description, note taker. <br/>
**.slnignore** file containing a list of all the files SLN should ignore when looking for notes to analize.

## Proposals for Data Mining

#### Determine Key Terms
The purpose of the algorithm is to help other scholars find information that they would find important. In that respect it is the duty of the program to sift through a large dataset of notes to determine what is valuable and what is not. Notes should have an initial scrubbing of all words and phrases that the computer has no need for when creating relationships of key terms.

To start discovering how key terms should be found we must look at examples of key terms.

###### Examples of Key Terms
- Plato
- Ohm's Law
- July 4th
- Independance Day
- Dark Ages
- Knossos Tablet

From Notes FYW/2014/FU-FYW-1141-01/wcatron/Liberal Arts/4
> -All problems are multidisaplinary, liberal arts education supports decision making in those realms.

###### Human Interpretation of Key words

- liberal arts
- liberal arts education

Process

1. Ignored common words "all","realms","in"

    *problems are multidisaplinary, liberal arts education supports decision making | those.*

2. Ignored common verbs "are", "making", "supports"

    *problems | multidisaplinary, liberal arts education | decision | those*

3. Assumed Punctuation denotes seperation of ideas and therfore seperates possible keywords.

    *problems | multidisaplinary | liberal arts education | decision | those*

4. Drew from knowledge of common words, "decision", "those", "problems" 

    *multidisaplinary | liberal arts education"

Requirements

- Database of common words that would never be part of key words.
- Database of Key Words by subject.

##### Conclusion
To make this solution effectve there needs to be a large amount of preproccessing that compiles information on the frequency of words in notes. This information can then be used to access the words importance. Human tagging can help create a more definative list of key words.

The possible solution would be to create a database of every word used and the number of times it is used and a human flag for importance. A secondary database contains known important words and relates them to lines in the scholars notes.

#### Determine Context
Notes are organized into topics and sub-topics often going many levels deep. The tree based approach is ideal for interpretting context for the data. Searching "Hemmingway" can return a citation with the following after the file /filename/20th Century Authors/Hemmingway/Influence *Hemmingway's understated style caught the attention of those around him.* By using the context we can assume that Hemmingway has something to do with "20th Century Authors", obviosly with "Hemmingway" and the "Influence" is his own but would not be a key word. By taking each supertopic's keywords we can create a map for the related topics. By using several different sources we can determine what other information is nessesary to understand Hemmingway in context.

Process

1. Find a topic containing a key term.
2. Find all other key terms for that topic and each super topic up to the root.
3. Complete steps 1 & 2 for several topics that contained the original keyword.
4. Compare the results from dataset looking for overlapse. Rank based on frequency and distance from original key term.

###### Conclusion
The heiarchy of the data is very important in the algorithms ability to determine the context of the key terms. It is however possible to return related key terms accuratly given a large enough dataset. By analysing nearby keyterms. Creating an additional database relating key terms with topics would allow for quick queries for topic's keywords.


