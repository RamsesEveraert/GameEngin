#pragma once
#include <memory>
#include "Transform.h"

namespace dae
{
	class TextObject;

	// todo: this should become final.
	class GameObject final
	{
	public:
		/*virtual void Update(float deltaTime);
		virtual void Render() const;*/
		void Update(float deltaTime);
		void Render() const;

		void SetTexture(const std::string& filename);
		void SetPosition(float x, float y);

		GameObject() = default;
		virtual ~GameObject();
		GameObject(const GameObject& other) = delete;
		GameObject(GameObject&& other) = delete;
		GameObject& operator=(const GameObject& other) = delete;
		GameObject& operator=(GameObject&& other) = delete;

	private:
		Transform m_transform{};
		std::shared_ptr<TextObject> m_TextObject{};
	};
}
