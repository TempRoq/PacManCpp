class Reference{
    public:
        static int updateRate;
};

class Component{

    public:
        virtual ~Component();
        virtual void OnStart();
        virtual void OnUpdate();
};

class GameObject{

    public:
        GameObject();
        GameObject(Component _components[]);
        ~GameObject();
        Component **components; //an array of pointers to components
        void AddComponent(Component c);
        void RemoveComponent(Component c);

};