// automatically generated, do not modify !!!

#import <FlatBuffers_ObjC/FBTable.h>
#import "KeyWord.h"


@interface TagUpdateResponse : FBTable 

@property (nonatomic, strong)NSString *logId;

@property (nonatomic, assign)int16_t errorCode;

@property (nonatomic, strong)FBMutableArray<KeyWord *> *keyWords;

@property (nonatomic, strong)NSString *timeToken;

@property (nonatomic, assign)int32_t keyWordCrc32;

@end
