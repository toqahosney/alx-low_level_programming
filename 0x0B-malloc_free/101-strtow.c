#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Function to check if a character is a whitespace character */
int is_space(char c) {
	return (c == ' ' || c == '\t' || c == '\n'); // Add more whitespace characters if needed
}

/* Function to count words in a string */
int count_words(const char *str) {
	int count = 0;
	int in_word = 0;

	while (*str) {
		if (is_space(*str)) {
			in_word = 0;
		} else if (!in_word) {
			in_word = 1;
			count++;
		}
		str++;
	}

	return count;
}

/* Function to duplicate a word from a string */
char *duplicate_word(const char *start, const char *end) {
	int length = end - start;
	char *word = (char *)malloc(length + 1);
	if (word) {
		memcpy(word, start, length);
		word[length] = '\0';
	}
	return word;
}

/* Function to split a string into words */
char **strtow(char *str) {
	if (str == NULL || *str == '\0') {
		return NULL;
	}

	int num_words = count_words(str);

	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL) {
		return NULL;
	}

	int in_word = 0;
	char **word_ptr = words;
	const char *start = str;

	while (*str) {
		if (is_space(*str)) {
			if (in_word) {
				*word_ptr = duplicate_word(start, str);
				if (*word_ptr == NULL) {
					/* Memory allocation failed, cleanup and return NULL */
					for (char **w = words; w < word_ptr; w++) {
						free(*w);
					}
					free(words);
					return NULL;
				}
				word_ptr++;
				in_word = 0;
			}
		} else if (!in_word) {
			start = str;
			in_word = 1;
		}
		str++;
	}

	if (in_word) {
		*word_ptr = duplicate_word(start, str);
		if (*word_ptr == NULL) {
			/* Memory allocation failed, cleanup and return NULL */
			for (char **w = words; w <= word_ptr; w++) {
				free(*w);
			}
			free(words);
			return NULL;
		}
	}

	/* Set the last element to NULL to mark the end of the array */
	words[num_words] = NULL;

	return words;
}

int main(void) {
	char str[] = "This is a sample string";
	char **word_array = strtow(str);

	if (word_array != NULL) {
		for (int i = 0; word_array[i] != NULL; i++) {
			printf("Word %d: %s\n", i, word_array[i]);
			free(word_array[i]);
		}
		free(word_array);
	} else {
		printf("Failed to split the string.\n");
	}

	return 0;
}
