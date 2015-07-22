/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKLabelTile : VKTile {

	shared_ptr<vk::LabelTile>* _labelTile;

}

@property (nonatomic,readonly) shared_ptr<vk::LabelTile>* labelTile;              //@synthesize labelTile=_labelTile - In the implementation block
-(id)description;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 tileType:(unsigned char)arg3 labelManager:(const shared_ptr<vk::LabelManager>Ref)arg4 ;
-(shared_ptr<vk::LabelTile>*)labelTile;
@end
