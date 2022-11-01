#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints to POSIX stdoutput
 * letters: the number of letters it should  read and print
 * Returns: actual number of letters  it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	int n; /*expected amount of bytes*/
	if (!filename)
		return (0);
	/*if (!filenam_open | !filename_read)
	 *	return (0);
	 *if (write == -1 | !n )
	 *	return (0);
	 */
	n = 0;
	letters =0;
	for (i = 0; i != '\0';i++) /*iterating through the file to  get the number of letters (letters)*/
	{
		n +=sizeof(filename[i]);
		letters++;
	}
	return (letters);


}
/*On files that support seeking, the read operation commences at the file offset,
 *and  the  file  offset is incremented by the number of bytes read.  If the file
 *offset is at or past the end of file, no bytes are  read,  and  read()  returns zero.
 *
 * If count is zero, read() may detect the errors described below.  In the absence
 * of any errors, or if read() does not check for errors, a read() with a count of
 * 0 returns zero and has no other effects.
 * 
 *  According  to POSIX.1, if count is greater than SSIZE_MAX, the result is imple‐
 *  mentation-defined; see NOTES for the upper limit on Linux.
 *
 *  RETURN VALUE
 *  On success, the number of bytes read is returned (zero indicates end of  file),
 *  and  the  file position is advanced by this number.
 */ 
