/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray *_affectedStores;
}

@property(retain) NSArray * affectedStores;
@property(readonly) unsigned int requestType;

+ (void)initialize;

- (id)affectedStores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)requestType;
- (void)setAffectedStores:(id)arg1;

@end