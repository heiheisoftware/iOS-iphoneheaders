/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBFileHandleProxy.h>

@class MBDriveRestoreEngine, MBFile, MBDigest;

@interface MBRestoreFileHandle : MBFileHandleProxy {

	MBDriveRestoreEngine* _engine;
	MBFile* _file;
	MBDigest* _digest;
	double _startTime;

}
-(BOOL)closeWithError:(id*)arg1 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 fileHandle:(id)arg2 file:(id)arg3 ;
-(void)dealloc;
@end

