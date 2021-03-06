/*
 * chris_global.h
 *
 *  Created on: Sep 25, 2012
 *      Author: chris
 */

#ifndef CHRIS_GLOBAL_H_
#define CHRIS_GLOBAL_H_

#define 		SEG_VERSION						"0.0.4.1.2.1 - magic_"

/*	video parameter	*/
#define 		VIDEO_CODEC_ID					CODEC_ID_H264
#define 		VIDEO_OUT_BUF_SIZE				200000

#define 		VIDEO_FRAME_RATE				25

#define 		VIDEO_WIDTH						1280
#define 		VIDEO_HEIGHT					720

#define 		VIDEO_BIT_RATE					3000*1000

#define 		ID_VIDEO_STREAM					0





/*	audio parameter	*/
#define 		AUDIO_CODEC_ID					CODEC_ID_AAC
#define 		AUDIO_OUT_BUF_SIZE				10000

#define 		AUDIO_BIT_RATE					128*1000
#define			AUDIO_SAMPLE_RATE				48000
#define			AUDIO_CHANNAL					2

#define 		ID_AUDIO_STREAM					1


#ifdef CHRIS
#define  chris_printf(format, ...) { \
				printf (format, ##__VA_ARGS__); \
				fflush (stdout); \
}
#else
	#define chris_printf(format ,...)

#endif

#endif /* CHRIS_GLOBAL_H_ */
