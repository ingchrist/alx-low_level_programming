#include "main.h"
/**
 *  * append_text_to_file - appends text at the end of a file
 *   * @filename: un ficher a vandre
 *    * @text_content: un ficher a acheter
 *     *
 *      * Return: 1 en cas de validation -1 en cas decheque
 */
int append_text_to_file(const char *filename, char *text_content)
{
int wz;
ssize_t len_write, wzq;

if (!filename)
return (-1);

wz = open(filename, O_WRONLY | O_APPEND);
if (wz == -1)
return (-1);

if (text_content)
{
/* get string length  */
for (wzq = 0 ; text_content[wzq]; wzq++)
;
len_write = write(wz, text_content, wzq);
if (len_write != wzq)
return (-1);
}

close(wz);

return (1);
}

