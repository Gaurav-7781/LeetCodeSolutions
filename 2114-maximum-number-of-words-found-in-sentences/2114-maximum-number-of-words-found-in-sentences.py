class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        max_words=0
        for sen in sentences:
            words = sen.split(" ")

            word_count= len(words)
            if word_count > max_words:
                max_words=word_count
            
        return max_words