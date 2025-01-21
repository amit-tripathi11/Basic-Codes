#Press shift+Enter to run the code
givenstring="Lorem ipsum dolor! diam amet, consetetur Lorem magna. sed diam nonumy eirmod tempor. diam et labore? et diam magna. et diam amet."
class TextAnalyzer(object):
    
    def __init__ (self, text):
        # remove punctuation
        formattedText = text.replace('.','').replace(',','').replace('!','').replace('?','')
        # make text lowercase
        formattedText = formattedText.lower()
        self.fmtText = formattedText
    def freqAll(self):        
        # split text into words
        list = self.fmtText.split(' ')
        freqD = {}
        for i in set(list):
            freqD[i] = list.count(i)
        return freqD

        def freqOf(self, i):
            freqDict = self.freqAll()
            if i in freqDict:
                return freqDict[i]
            else:
                return 0
analyzed = TextAnalyzer(givenstring)
print("Formatted Text:", analyzed.fmtText) 
freqD = analyzed.freqAll()
print(freqD)