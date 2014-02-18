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
- Subsection
- Supersection
- File
- as of Commit
- Class - school-department-course-section
- Year
- Subject

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

From Notes FYW/2014/Homer and History/Liberal Arts/4
> -All problems are multidisaplinary, liberal arts education supports decision making in those realms.

Human Interpretation of Key words
-liberal arts
-liberal arts education

Process
1. Ignored common words "all","realms","in"
    *problems are multidisaplinary, liberal arts education supports decision making | those.*
2. Ignored common verbs "are", "making", "supports"
    *problems | multidisaplinary, liberal arts education | decision | those*
3. Assumed Punctuation denotes seperation of ideas and therfore seperates possible keywords.
    *problems | multidisaplinary | liberal arts education | decision | those*
4. Draw from knowledge of common words, "decision", "those", "problems" 
    *multidisaplinary | liberal arts education"
