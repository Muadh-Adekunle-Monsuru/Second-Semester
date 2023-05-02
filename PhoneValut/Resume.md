Skip to content
Sign up
KyleAMathews
/
kjh-vita
Public
forked from kjhealy/kjh-vita
Code
Pull requests
Actions
Projects
Wiki
Security
Insights
kjh-vita/kyle-resume.tex
@KyleAMathews
KyleAMathews Update resume
 1 contributor
267 lines (202 sloc)  10 KB
%%% A template to produce a nice-looking Curriculum Vitae.
%%% Original by Kieran Healy <kjhealy@gmail.com>
%%% Modified by Kyle Mathews <mathews.kyle@gmail.com>
%%%
%%% ------------------------------------------------------------------------
%%% Requirements (should be included in a modern tex distribution):
%%% ------------------------------------------------------------------------
%%% xelatex
%%% fontspec.sty
%%% hyperrref.sty
%%% xunicode.sty
%%% color.sty
%%% url.sty
%%% fancyhdr.sty
%%%
%%% ------------------------------------------------------------------------
%%% Optional
%%% ------------------------------------------------------------------------
%%% git
%%% vc.sty
%%% revnum.sty
%%% Fonts
%%%
%%% ------------------------------------------------------------------------
%%% Note
%%%------------------------------------------------------------------------
%%% Because this is a hand-tweaked file, be on the look out for \medksip,
%%% \bigskip and \newpage commands here and there, which are used to balance
%%% the layout or avoid widows & orphans, etc. You should of course add or
%%% remove these as needed.
%%%------------------------------------------------------------------------

\documentclass[11pt]{article}

%%%------------------------------------------------------------------------
%%% Metadata
%%%------------------------------------------------------------------------

%% Change as needed. Or just add me as a coauthor. Only some of these are
%% used below in the hyperref declaration and address banner section.
\def\myauthor{Kyle Mathews}
\def\mytitle{Resume}
\def\mycopyright{\myauthor}
\def\mykeywords{}
\def\mybibliostyle{plain}
\def\mybibliocommand{}
\def\mysubtitle{}
\def\myaffiliation{Freelance Web Developer}
\def\myaddress{1134 Irving St. San Francisco CA, 94122}
\def\myemail{mathews.kyle@gmail.com}
\def\myweb{https://bricolage.io}
\def\myphone{(801) 709-0238}
\def\myversion{}
\def\myrevision{}


\def\myaffiliation{Freelance Web Developer}
\def\myauthor{Kyle Mathews}
\date{} % not used (revision control instead)
\def\mykeywords{Kyle, Mathews, Kyle Mathews, Vita, CV, Resume, Backbone, React.js, Coffeescript, Javascript, Product Development, UI/UX design,  Web development, social software}

%%%------------------------------------------------------------------------
%%% Git version tracking
%%%------------------------------------------------------------------------

%% If you don't use git or the vc package (from CTAN), comment this out.
%% If you comment it out, be sure to remove the \rfoot comment below, too.
%\input{vc}

%%%------------------------------------------------------------------------
%%% Required style files
%%%------------------------------------------------------------------------
\usepackage{url,fancyhdr}
%%\usepackage{revnum} % for reverse-numbered publications (revnumerate environment) if needed.

%% needed for xelatex to work
\usepackage{fontspec}
\usepackage{xunicode}

%% color for the links
\usepackage[usenames,dvipsnames]{color}

%% hyperlinks
\usepackage[xetex,
	colorlinks=true,
	urlcolor=BlueViolet,
	plainpages=false,
  	pdfpagelabels,
  	bookmarksnumbered,
  	pdftitle={\mytitle},
  	pagebackref,
  	pdfauthor={\myauthor},
  	pdfkeywords={\mykeywords}
  	]{hyperref}

%http://tex.stackexchange.com/a/136050
% Make line spacing around lists consistent.
\usepackage{parskip}
\newenvironment{mydescription}
{ \begin{description}
    \setlength{\itemsep}{0pt}
    \setlength{\parskip}{0pt}
    \setlength{\parsep}{0pt}     }
{ \end{description}                  }

%%%------------------------------------------------------------------------
%%% Document
%%%------------------------------------------------------------------------
\begin{document}

%% Choose fonts for use with xelatex
\setromanfont[Mapping={tex-text},Numbers={OldStyle},Ligatures={Common}]{Minion Pro}
\setsansfont[Mapping=tex-text,Colour=AA0000]{Myriad Pro}
\setmonofont[Mapping=tex-text,Scale=0.9]{Inconsolata}


%%%------------------------------------------------------------------------
%%% Local commands
%%%------------------------------------------------------------------------

%% Marginal header
%% Note: as the document goes on you may need to introduce a (gradually increasing)
%% \vspace element to keep the marginal header pleasingly aligned with the first
%% item in the body text. Like this: \marginhead{{\vskip 0.4em}Grants}, or
%% \marginhead{{\vskip 0.8em}Service}. Experiment as needed.
\newcommand{\marginhead}[1]{\marginpar{\textsf{{\footnotesize\vspace{-1em}\flushright #1}}}}

%% custom ampersand (font consistent with the one chosen above)
\newcommand{\amper}{{\fontspec[Scale=.95,Colour=AA0000]{Minion Pro Medium}\selectfont\&\,}}

%% Custom hanging indent for vita items
\def\ind{\hangindent=1 true cm\hangafter=1 \noindent}
%\def\ind{\hangindent=18pt\hangafter=1 \noindent}
\def\labelitemi{~}
\renewcommand{\labelitemii}{~}

%%%------------------------------------------------------------------------
%%% Page layout
%%%------------------------------------------------------------------------
\pagestyle{fancy}
\renewcommand{\headrulewidth}{0pt}
\fancyhead{}
\fancyfoot{}
\rhead{{\scriptsize\thepage}}

%% git revision control footer
%\rfoot{\texttt{\scriptsize \VCRevision\ on \VCDateTEX}} % git revision info inserted via external script -- see docs for vc package for details. comment out this line if you're not using vc, and also remove the \input{vc} line above.

%%%------------------------------------------------------------------------
%%% Address and contact block
%%%------------------------------------------------------------------------
\begin{minipage}[t]{2.95in}
 \flushright {\footnotesize 1134 Irving Street \\ \vspace{-0.05in} San Francisco, \textsc{CA} 94122}

\end{minipage}
\hfill
%\begin{minipage}[t]{0.0in}
% dummy (needed here)
%\end{minipage}
\hfill
\begin{minipage}[t]{1.7in}
  \flushright \footnotesize Phone: \myphone \\
  {\scriptsize  \texttt{\href{mailto:\myemail}{\myemail}}} \\
  {\scriptsize  \texttt{\href{\myweb}{\myweb}}}
\end{minipage}


\medskip

%% Name
\noindent{\Large {\textsc{Kyle Mathews}}}
\reversemarginpar

\medskip

%% Summary
\medskip
\marginhead{{\vskip -0.2em}Summary}

\noindent Experienced web developer/designer with a deep knowledge of open source software development, education, and social software.

\medskip

\noindent Passionate about finding elegant solutions to important problems. Experienced entrepreneur. Creative, risk taker, strong writer and communicator, experienced public speaker.

\bigskip

%% Education

\marginhead{{\vskip -0.4em}Education}

\noindent\emph{Brigham Young University \vspace{0.15in}}

\ind 2009. M.S., Information Systems.

\ind 2009. B.S., Information Systems.

\bigskip

%% Experience
\marginhead{{\vskip 0.3em}Experience}
\medskip

\noindent{\emph{Technical co-founder at RelateRocket \hfill June 2014 -- June 2016} \vspace{0.15in}}

\noindent I co-founded RelateRocket, an enterprise SaaS company. Our product algorithimically generated targeted insights and messaging for sales reps. I led product and engineering and designed and built a robust and scalable data intake and analysis platform. The platform took data from customers CRMs and merged it in real-time with data from multiple 3rd-party information sources. The insights were served to sales reps through a custom Salesforce app built with React.js, Relay, and GraphQL.

\bigskip

\noindent{\emph{Senior Frontend Engineer and Product Manager at \href{http://getpantheon.com}{Pantheon} \hfill December 2011 -- April 2014} \vspace{0.15in}}

\noindent Highlights of my time at Pantheon include:

\begin{itemize}
  \item[--] \href{https://www.getpantheon.com/news/apollo-launched}{Rebuilding the Pantheon dashboard from the ground up as a real-time single-page-app using Backbone.js and SockJS.}
  \item[--] \href{http://techcrunch.com/2013/07/10/pantheon-multidev/}{Designing and building Multidev — cloud development environments for teams. Basically Git for the entire stack (files, DB, and code) not just code. It’s been a huge hit for customers with larger teams of developers.}
  \item[--] \href{https://www.getpantheon.com/pantheon-one}{Designing and building Pantheon One — a suite of tools for customers administering 100s to 1000s of websites.}
\end{itemize}

\bigskip

\noindent{\emph{Founder at \href{http://eduglu.com}{Eduglu} \hfill January 2009 -- March 2011} \vspace{0.15in}}

\noindent I founded Eduglu to productize social learning research I did while in college. Eduglu was one of the first Drupal products to be released. Eduglu was downloaded over 600 times and has been successfully deployed at a number of different institutions including Brigham Young University and Georgia State University.

\bigskip

%% Skills
\marginhead{{\vskip 0.2em}Skills}
\medskip

\noindent\emph{Product Management}

\medskip

\noindent I led product management at Pantheon for all customer facing features. My bible is \emph{\href{http://www.amazon.com/The-Principles-Product-Development-Flow/dp/1935401009/}{The Principles of Product Development Flow: Second Generation Lean Product Development}}.

\bigskip
\medskip

\noindent\emph{Technologies}

\medskip

\begin{mydescription}
  \item[Front end] React.js, Relay, Typography.js, HTML, CSS
  \item[Programming languages] Javascript/CoffeeScript, Python, PHP
\end{mydescription}

\bigskip

\noindent\emph{Public speaking}

\medskip

\noindent I have presented at a number of international education and technology conferences as well as many smaller conferences and meetups including:

\medskip

\begin{mydescription}
  \item[\href{http://www.archive.org/details/DrupalconDc2009-BuildingAdvancedSocialNetworksAtALargeU.s.University}{``Building Advanced Social Networks at a Large U.S. University"}] Drupalcon DC 2009
  \item[\href{http://ttix.org/archives/2010-sessions/introducing-eduglu-a-new-drupal-distribution-for-higher-education/}{``Introducing Eduglu, a new Drupal distribution for Higher Education"}] Teaching With Technology Idea Exchange 2010
  \item[\href{http://www.ignitesaltlake.com/ignite/index.cfm/videos/ignite-salt-lake-2/}{``Building Social Networks for Learning"}] Ignite Salt Lake City 2009
\end{mydescription}


\end{document}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
